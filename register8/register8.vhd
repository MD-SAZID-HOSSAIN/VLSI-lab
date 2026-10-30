library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- 8-bit register: synchronous active-high reset, load enable
entity register8 is
    Port ( clk   : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           load  : in  STD_LOGIC;
           d     : in  STD_LOGIC_VECTOR (7 downto 0);
           q     : out STD_LOGIC_VECTOR (7 downto 0));
end register8;

architecture Behavioral of register8 is
    signal q_reg : STD_LOGIC_VECTOR (7 downto 0) := (others => '0');
begin
    process (clk)
    begin
        if rising_edge(clk) then
            if reset = '1' then
                q_reg <= (others => '0');
            elsif load = '1' then
                q_reg <= d;
            end if;                -- load = 0: hold value
        end if;
    end process;

    q <= q_reg;
end Behavioral;
