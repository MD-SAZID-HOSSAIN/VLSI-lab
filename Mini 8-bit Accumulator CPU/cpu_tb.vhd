

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity cpu_tb is
end cpu_tb;

architecture sim of cpu_tb is
    signal clk    : STD_LOGIC := '0';
    signal reset  : STD_LOGIC := '1';
    signal q      : STD_LOGIC_VECTOR (7 downto 0);
    signal z      : STD_LOGIC;
    signal pc_out : STD_LOGIC_VECTOR (3 downto 0);
    signal done   : boolean := false;

    constant T : time := 10 ns;

    -- Appendix B, Set 2: values after the rising edge of cycle 0..7
    type acc_array is array (0 to 7) of STD_LOGIC_VECTOR (7 downto 0);
    constant EXP_ACC : acc_array := (x"00", x"55", x"AA", x"55", x"AA", x"00", x"81", x"02");
    constant EXP_Z   : STD_LOGIC_VECTOR (0 to 7) := "10000100";
begin
    UUT : entity work.cpu_top
        port map (clk => clk, reset => reset, q => q, z => z, pc_out => pc_out);

    -- clock generator: runs until the test finishes
    clk_proc : process
    begin
        while not done loop
            clk <= '0'; wait for T/2;
            clk <= '1'; wait for T/2;
        end loop;
        wait;
    end process;

    stim_proc : process
        variable errors : integer := 0;
    begin
        -- cycle 0 : RESET = 1 for exactly one rising edge
        reset <= '1';
        wait until rising_edge(clk);
        wait for 1 ns;                       -- sample just after the edge
        assert (q = EXP_ACC(0)) and (z = EXP_Z(0)) and (unsigned(pc_out) = 0)
            report "Cycle 0 (reset) mismatch" severity error;
        reset <= '0';

        -- cycles 1..7 : one clock per instruction
        for n in 1 to 7 loop
            wait until rising_edge(clk);
            wait for 1 ns;
            if (q /= EXP_ACC(n)) or (z /= EXP_Z(n)) or (to_integer(unsigned(pc_out)) /= n) then
                errors := errors + 1;
                report "Cycle " & integer'image(n) & " MISMATCH: ACC=" &
                       integer'image(to_integer(unsigned(q))) & " Z=" & STD_LOGIC'image(z) &
                       " PC=" & integer'image(to_integer(unsigned(pc_out)))
                       severity error;
            else
                report "Cycle " & integer'image(n) & " OK: ACC=" &
                       integer'image(to_integer(unsigned(q))) & " Z=" & STD_LOGIC'image(z) &
                       " nextPC=" & integer'image(to_integer(unsigned(pc_out)));
            end if;
        end loop;

        if errors = 0 then
            report "*** ALL CYCLES PASSED - Set 2 program verified ***";
        else
            report "*** TEST FAILED, errors = " & integer'image(errors) severity error;
        end if;

        done <= true;
        wait;
    end process;
end sim;