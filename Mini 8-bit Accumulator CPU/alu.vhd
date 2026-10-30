
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity alu is
    Port ( acc     : in  STD_LOGIC_VECTOR (7 downto 0);
           imm     : in  STD_LOGIC_VECTOR (7 downto 0);
           alu_sel : in  STD_LOGIC_VECTOR (2 downto 0);
           result  : out STD_LOGIC_VECTOR (7 downto 0);
           zero    : out STD_LOGIC);
end alu;

architecture Behavioral of alu is
    signal r : STD_LOGIC_VECTOR (7 downto 0);
begin
    process(acc, imm, alu_sel)
    begin
        case alu_sel is
            when "001"  => r <= imm;                                              -- LDI
            when "010"  => r <= STD_LOGIC_VECTOR(unsigned(acc) + unsigned(imm));  -- ADD (carry dropped)
            when "011"  => r <= acc xor imm;                                      -- XOR
            when "100"  => r <= not acc;                                          -- NOT
            when "101"  => r <= acc(6 downto 0) & '0';                            -- SHL (0 into LSB)
            when others => r <= acc;                                              -- NOP (not written)
        end case;
    end process;

    result <= r;
    zero   <= '1' when r = "00000000" else '0';
end Behavioral;