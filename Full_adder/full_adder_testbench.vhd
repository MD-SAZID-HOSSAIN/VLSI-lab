LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY full_adder_testbench IS
END full_adder_testbench;

ARCHITECTURE behavior OF full_adder_testbench IS

    COMPONENT FullAdder
    PORT(
         A    : IN  std_logic;
         B    : IN  std_logic;
         Cin  : IN  std_logic;
         Sum  : OUT std_logic;
         Cout : OUT std_logic
        );
    END COMPONENT;

    signal A    : std_logic := '0';
    signal B    : std_logic := '0';
    signal Cin  : std_logic := '0';

    signal Sum  : std_logic;
    signal Cout : std_logic;

BEGIN

    uut: FullAdder PORT MAP (
          A    => A,
          B    => B,
          Cin  => Cin,
          Sum  => Sum,
          Cout => Cout
        );

    stim_proc: process
    begin

        A <= '0';
        B <= '0';
        Cin <= '0';
        wait for 50 ns;

        A <= '0';
        B <= '0';
        Cin <= '1';
        wait for 50 ns;

        A <= '0';
        B <= '1';
        Cin <= '0';
        wait for 50 ns;

        A <= '0';
        B <= '1';
        Cin <= '1';
        wait for 50 ns;

        A <= '1';
        B <= '0';
        Cin <= '0';
        wait for 50 ns;

        A <= '1';
        B <= '0';
        Cin <= '1';
        wait for 50 ns;

        A <= '1';
        B <= '1';
        Cin <= '0';
        wait for 50 ns;

        A <= '1';
        B <= '1';
        Cin <= '1';
        wait for 50 ns;

        wait;

    end process;

END behavior;