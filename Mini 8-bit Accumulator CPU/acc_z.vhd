

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity acc_z is
    Port ( clk    : in  STD_LOGIC;
           reset  : in  STD_LOGIC;
           acc_we : in  STD_LOGIC;
           z_we   : in  STD_LOGIC;
           result : in  STD_LOGIC_VECTOR (7 downto 0);
           zero   : in  STD_LOGIC;
           acc_q  : out STD_LOGIC_VECTOR (7 downto 0);
           z_q    : out STD_LOGIC);
end acc_z;

architecture Behavioral of acc_z is
    signal acc_r : STD_LOGIC_VECTOR (7 downto 0) := (others => '0');
    signal z_r   : STD_LOGIC := '1';
begin
    process(clk)
    begin
        if rising_edge(clk) then
            if reset = '1' then                  -- reset has priority
                acc_r <= (others => '0');
                z_r   <= '1';
            else
                if acc_we = '1' then acc_r <= result; end if;
                if z_we   = '1' then z_r   <= zero;   end if;
            end if;
        end if;
    end process;

    acc_q <= acc_r;
    z_q   <= z_r;
end Behavioral;