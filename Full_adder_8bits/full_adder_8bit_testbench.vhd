LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY full_adder_8bit_testbench IS
END full_adder_8bit_testbench;

ARCHITECTURE behavior OF full_adder_8bit_testbench IS

    COMPONENT full_adder_8bits
    PORT(
         A    : IN  std_logic_vector(7 downto 0);
         B    : IN  std_logic_vector(7 downto 0);
         Cin  : IN  std_logic;
         Sum  : OUT std_logic_vector(7 downto 0);
         Cout : OUT std_logic
        );
    END COMPONENT;

    signal A    : std_logic_vector(7 downto 0) := (others => '0');
    signal B    : std_logic_vector(7 downto 0) := (others => '0');
    signal Cin  : std_logic := '0';

    signal Sum  : std_logic_vector(7 downto 0);
    signal Cout : std_logic;

BEGIN

    uut: full_adder_8bits PORT MAP (
          A    => A,
          B    => B,
          Cin  => Cin,
          Sum  => Sum,
          Cout => Cout
        );

    stim_proc: process
    begin

        A <= "00000000";
        B <= "00000000";
        Cin <= '0';
        wait for 120 ns;

        A <= "00000001";
        B <= "00000001";
        Cin <= '0';
        wait for 120 ns;

        A <= "00000101";
        B <= "00000011";
        Cin <= '0';
        wait for 120 ns;

        A <= "00001111";
        B <= "00000001";
        Cin <= '0';
        wait for 120 ns;

        A <= "00110011";
        B <= "00001100";
        Cin <= '0';
        wait for 120 ns;

        A <= "01010101";
        B <= "10101010";
        Cin <= '0';
        wait for 120 ns;

        A <= "11111111";
        B <= "00000001";
        Cin <= '0';
        wait for 120 ns;

        A <= "11111111";
        B <= "11111111";
        Cin <= '0';
        wait for 120 ns;

        A <= "10101010";
        B <= "01010101";
        Cin <= '1';
        wait for 120 ns;

        wait;

    end process;

END behavior;