library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity program_counter is
    Port ( clk    : in  STD_LOGIC;
           reset  : in  STD_LOGIC;
           pc_out : out STD_LOGIC_VECTOR (3 downto 0));
end program_counter;

architecture Behavioral of program_counter is
    signal cnt : unsigned(3 downto 0) := (others => '0');
begin
    process(clk)
    begin
        if rising_edge(clk) then
            if reset = '1' then
                cnt <= (others => '0');      -- synchronous, active-high reset
            else
                cnt <= cnt + 1;              -- Set 2 has no JZ, so always PC + 1
            end if;
        end if;
    end process;

    pc_out <= std_logic_vector(cnt);
end Behavioral;