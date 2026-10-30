
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity alu_tb is
end alu_tb;

architecture sim of alu_tb is
    signal acc     : STD_LOGIC_VECTOR (7 downto 0) := x"00";
    signal imm     : STD_LOGIC_VECTOR (7 downto 0) := x"00";
    signal alu_sel : STD_LOGIC_VECTOR (2 downto 0) := "000";
    signal result  : STD_LOGIC_VECTOR (7 downto 0);
    signal zero    : STD_LOGIC;

    -- one test vector: ACC input, operand, ALU select, expected result
    type vector_type is record
        a : STD_LOGIC_VECTOR (7 downto 0);
        i : STD_LOGIC_VECTOR (7 downto 0);
        s : STD_LOGIC_VECTOR (2 downto 0);
        r : STD_LOGIC_VECTOR (7 downto 0);
    end record;
    type vector_array is array (natural range <>) of vector_type;

    -- alu_sel: 001 LDI, 010 ADD, 011 XOR, 100 NOT, 101 SHL
    constant V : vector_array := (
        (x"AA", x"55", "001", x"55"),   -- LDI 0x55
        (x"AA", x"00", "001", x"00"),   -- LDI 0x00      -> zero = 1
        (x"55", x"01", "010", x"56"),   -- ADD
        (x"10", x"0F", "010", x"1F"),   -- ADD
        (x"AA", x"56", "010", x"00"),   -- ADD 0x100 -> 0x00, carry dropped
        (x"FF", x"01", "010", x"00"),   -- ADD wrap-around
        (x"55", x"FF", "011", x"AA"),   -- XOR
        (x"81", x"81", "011", x"00"),   -- XOR same value -> zero = 1
        (x"00", x"81", "011", x"81"),   -- XOR with 0
        (x"AA", x"00", "100", x"55"),   -- NOT 0xAA
        (x"FF", x"00", "100", x"00"),   -- NOT 0xFF     -> zero = 1
        (x"00", x"00", "100", x"FF"),   -- NOT 0x00
        (x"55", x"00", "101", x"AA"),   -- SHL
        (x"81", x"00", "101", x"02"),   -- SHL, MSB is lost
        (x"80", x"00", "101", x"00"),   -- SHL           -> zero = 1
        (x"FF", x"00", "101", x"FE")    -- SHL, 0 enters the LSB
    );
begin
    UUT : entity work.alu
        port map (acc => acc, imm => imm, alu_sel => alu_sel,
                  result => result, zero => zero);

    stim_proc : process
        variable errors : integer := 0;
        variable exp_zero : STD_LOGIC;
    begin
        for k in V'range loop
            acc     <= V(k).a;
            imm     <= V(k).i;
            alu_sel <= V(k).s;
            wait for 10 ns;

            if V(k).r = x"00" then
                exp_zero := '1';
            else
                exp_zero := '0';
            end if;

            if (result /= V(k).r) or (zero /= exp_zero) then
                errors := errors + 1;
                report "Test " & integer'image(k) & " MISMATCH: result=" &
                       integer'image(to_integer(unsigned(result))) &
                       " zero=" & STD_LOGIC'image(zero) &
                       " expected " &
                       integer'image(to_integer(unsigned(V(k).r)))
                       severity error;
            else
                report "Test " & integer'image(k) & " OK: result=" &
                       integer'image(to_integer(unsigned(result))) &
                       " zero=" & STD_LOGIC'image(zero);
            end if;
        end loop;

        if errors = 0 then
            report "*** alu_tb PASSED ***";
        else
            report "*** alu_tb FAILED, errors = " &
                   integer'image(errors) severity error;
        end if;
        wait;
    end process;
end sim;