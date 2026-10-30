

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity program_counter_tb is
end program_counter_tb;

architecture sim of program_counter_tb is
    signal clk    : STD_LOGIC := '0';
    signal reset  : STD_LOGIC := '1';
    signal pc_out : STD_LOGIC_VECTOR (3 downto 0);
    signal done   : boolean := false;

    constant T : time := 10 ns;
begin
    UUT : entity work.program_counter
        port map (clk => clk, reset => reset, pc_out => pc_out);

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

        procedure check (step : in integer; expected : in integer) is
        begin
            if to_integer(unsigned(pc_out)) /= expected then
                errors := errors + 1;
                report "Step " & integer'image(step) & " MISMATCH: PC=" &
                       integer'image(to_integer(unsigned(pc_out))) &
                       " expected " & integer'image(expected)
                       severity error;
            else
                report "Step " & integer'image(step) & " OK: PC=" &
                       integer'image(expected);
            end if;
        end procedure;
    begin
        -- 1) synchronous reset: PC must become 0 on the first rising edge
        reset <= '1';
        wait until rising_edge(clk);
        wait for 1 ns;
        check(0, 0);
        reset <= '0';

        -- 2) free counting for 20 edges (4-bit counter wraps 15 -> 0)
        for n in 1 to 20 loop
            wait until rising_edge(clk);
            wait for 1 ns;
            check(n, n mod 16);
        end loop;

        -- 3) reset in the middle of counting (PC is 4 here)
        reset <= '1';
        wait until rising_edge(clk);
        wait for 1 ns;
        check(21, 0);
        reset <= '0';

        -- 4) counting resumes from 0 after reset is released
        wait until rising_edge(clk);
        wait for 1 ns;
        check(22, 1);

        if errors = 0 then
            report "*** program_counter_tb PASSED ***";
        else
            report "*** program_counter_tb FAILED, errors = " &
                   integer'image(errors) severity error;
        end if;

        done <= true;
        wait;
    end process;
end sim;