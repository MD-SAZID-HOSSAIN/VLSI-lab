
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity alu8_tb is
end alu8_tb;

architecture Behavioral of alu8_tb is
    signal a      : STD_LOGIC_VECTOR (7 downto 0) := (others => '0');
    signal b      : STD_LOGIC_VECTOR (7 downto 0) := (others => '0');
    signal op     : STD_LOGIC_VECTOR (2 downto 0) := "000";
    signal result : STD_LOGIC_VECTOR (7 downto 0);
    signal carry  : STD_LOGIC;
    signal zero   : STD_LOGIC;

begin
    uut: entity work.alu8
        port map (a => a, b => b, op => op, result => result, carry => carry, zero => zero);

    stim_proc: process
        constant OP_ADD : STD_LOGIC_VECTOR (2 downto 0) := "000";
        constant OP_SUB : STD_LOGIC_VECTOR (2 downto 0) := "001";
        constant OP_AND : STD_LOGIC_VECTOR (2 downto 0) := "010";
        constant OP_OR  : STD_LOGIC_VECTOR (2 downto 0) := "011";
        constant OP_XOR : STD_LOGIC_VECTOR (2 downto 0) := "100";
        constant OP_NOT : STD_LOGIC_VECTOR (2 downto 0) := "101";
        constant OP_SHL : STD_LOGIC_VECTOR (2 downto 0) := "110";
        constant OP_SHR : STD_LOGIC_VECTOR (2 downto 0) := "111";

        type int_array is array (0 to 4) of integer;
        constant B_VALUES : int_array := (0, 1, 127, 128, 255);

        variable errors : integer := 0;
        variable tests  : integer := 0;
        variable sum    : integer;
        variable diff   : integer;
        variable exp_c  : STD_LOGIC;

        -- apply one test, wait, then compare result, carry and zero
        procedure check (ta   : in integer;
                         tb   : in integer;
                         top  : in STD_LOGIC_VECTOR (2 downto 0);
                         er   : in integer;
                         ec   : in STD_LOGIC;
                         msg  : in string;
                         wt   : in time) is
            variable ez : STD_LOGIC;
        begin
            a  <= STD_LOGIC_VECTOR(to_unsigned(ta, 8));
            b  <= STD_LOGIC_VECTOR(to_unsigned(tb, 8));
            op <= top;
            wait for wt;
            if er = 0 then ez := '1'; else ez := '0'; end if;
            tests := tests + 1;
            if (result /= STD_LOGIC_VECTOR(to_unsigned(er, 8))) or
               (carry /= ec) or (zero /= ez) then
                report "FAIL: " & msg & "  a=" & integer'image(ta) &
                       " b=" & integer'image(tb) & "  expected result=" &
                       integer'image(er) & " carry=" & STD_LOGIC'image(ec)
                       severity error;
                errors := errors + 1;
            end if;
        end procedure;
    begin
        wait for 10 ns;

        -- ADD
        check (16#0F#, 16#01#, OP_ADD, 16#10#, '0', "ADD 0F+01", 5 ns);
        check (16#55#, 16#2A#, OP_ADD, 16#7F#, '0', "ADD 55+2A", 5 ns);
        check (16#FF#, 16#01#, OP_ADD, 16#00#, '1', "ADD FF+01 (carry, zero)", 5 ns);
        check (16#80#, 16#80#, OP_ADD, 16#00#, '1', "ADD 80+80 (carry, zero)", 5 ns);

        -- SUB
        check (16#10#, 16#01#, OP_SUB, 16#0F#, '0', "SUB 10-01", 5 ns);
        check (16#05#, 16#05#, OP_SUB, 16#00#, '0', "SUB 05-05 (zero)", 5 ns);
        check (16#01#, 16#02#, OP_SUB, 16#FF#, '1', "SUB 01-02 (borrow)", 5 ns);

        -- AND
        check (16#F0#, 16#3C#, OP_AND, 16#30#, '0', "AND F0&3C", 5 ns);
        check (16#AA#, 16#55#, OP_AND, 16#00#, '0', "AND AA&55 (zero)", 5 ns);

        -- OR
        check (16#F0#, 16#0F#, OP_OR,  16#FF#, '0', "OR F0|0F", 5 ns);
        check (16#00#, 16#00#, OP_OR,  16#00#, '0', "OR 00|00 (zero)", 5 ns);

        -- XOR
        check (16#FF#, 16#0F#, OP_XOR, 16#F0#, '0', "XOR FF^0F", 5 ns);
        check (16#AA#, 16#AA#, OP_XOR, 16#00#, '0', "XOR AA^AA (zero)", 5 ns);

        -- NOT (uses a only)
        check (16#55#, 16#00#, OP_NOT, 16#AA#, '0', "NOT 55", 5 ns);
        check (16#FF#, 16#00#, OP_NOT, 16#00#, '0', "NOT FF (zero)", 5 ns);

        -- SHL (uses a only)
        check (16#01#, 16#00#, OP_SHL, 16#02#, '0', "SHL 01", 5 ns);
        check (16#81#, 16#00#, OP_SHL, 16#02#, '1', "SHL 81 (carry)", 5 ns);
        check (16#80#, 16#00#, OP_SHL, 16#00#, '1', "SHL 80 (carry, zero)", 5 ns);

        -- SHR (uses a only)
        check (16#02#, 16#00#, OP_SHR, 16#01#, '0', "SHR 02", 5 ns);
        check (16#81#, 16#00#, OP_SHR, 16#40#, '1', "SHR 81 (carry)", 5 ns);
        check (16#01#, 16#00#, OP_SHR, 16#00#, '1', "SHR 01 (carry, zero)", 5 ns);

        -- wider check of ADD and SUB against integer arithmetic
        for i in 0 to 17 loop
            for j in 0 to 4 loop
                sum := (i * 15) + B_VALUES(j);
                if sum >= 256 then exp_c := '1'; else exp_c := '0'; end if;
                check (i * 15, B_VALUES(j), OP_ADD, sum mod 256, exp_c, "ADD sweep", 1 ns);

                diff := (i * 15) - B_VALUES(j);
                if diff < 0 then
                    check (i * 15, B_VALUES(j), OP_SUB, diff + 256, '1', "SUB sweep", 1 ns);
                else
                    check (i * 15, B_VALUES(j), OP_SUB, diff, '0', "SUB sweep", 1 ns);
                end if;
            end loop;
        end loop;

        if errors = 0 then
            report "ALL ALU TESTS PASSED (" & integer'image(tests) & " checks)";
        else
            report "ALU TESTS FAILED: " & integer'image(errors) & " error(s) in " &
                   integer'image(tests) & " checks" severity error;
        end if;
        wait;
    end process;
end Behavioral;