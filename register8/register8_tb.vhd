
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity register8_tb is
end register8_tb;

architecture Behavioral of register8_tb is
    component register8
        Port ( clk   : in  STD_LOGIC;
               reset : in  STD_LOGIC;
               load  : in  STD_LOGIC;
               d     : in  STD_LOGIC_VECTOR (7 downto 0);
               q     : out STD_LOGIC_VECTOR (7 downto 0));
    end component;

    signal clk   : STD_LOGIC := '0';
    signal reset : STD_LOGIC := '0';
    signal load  : STD_LOGIC := '0';
    signal d     : STD_LOGIC_VECTOR (7 downto 0) := (others => '0');
    signal q     : STD_LOGIC_VECTOR (7 downto 0);

    constant CLK_PERIOD : time := 10 ns;
    signal done : boolean := false;
begin
    uut: entity work.register8 port map (clk => clk, reset => reset, load => load, d => d, q => q);

    clk_process: process
    begin
        while not done loop
            clk <= '0'; wait for CLK_PERIOD/2;
            clk <= '1'; wait for CLK_PERIOD/2;
        end loop;
        wait;
    end process;

    stim_proc: process
        variable errors : integer := 0;
    begin
        -- 1) reset
        reset <= '1'; load <= '0'; d <= x"FF";
        wait until rising_edge(clk); wait for 1 ns;
        if q /= x"00" then report "FAIL: reset" severity error; errors := errors + 1; end if;

        -- 2) load 0xA5
        reset <= '0'; load <= '1'; d <= x"A5";
        wait until rising_edge(clk); wait for 1 ns;
        if q /= x"A5" then report "FAIL: load A5" severity error; errors := errors + 1; end if;

        -- 3) hold: load = 0, d changes, q must not
        load <= '0'; d <= x"3C";
        wait until rising_edge(clk); wait for 1 ns;
        if q /= x"A5" then report "FAIL: hold" severity error; errors := errors + 1; end if;

        -- 4) load 0x3C
        load <= '1';
        wait until rising_edge(clk); wait for 1 ns;
        if q /= x"3C" then report "FAIL: load 3C" severity error; errors := errors + 1; end if;

        -- 5) reset beats load
        reset <= '1'; d <= x"FF";
        wait until rising_edge(clk); wait for 1 ns;
        if q /= x"00" then report "FAIL: reset priority" severity error; errors := errors + 1; end if;

        -- 6) load after reset
        reset <= '0'; d <= x"7E";
        wait until rising_edge(clk); wait for 1 ns;
        if q /= x"7E" then report "FAIL: load 7E" severity error; errors := errors + 1; end if;

        if errors = 0 then
            report "ALL TESTS PASSED";
        else
            report "TESTS FAILED: " & integer'image(errors) & " error(s)" severity error;
        end if;
        done <= true;
        wait;
    end process;
end Behavioral;