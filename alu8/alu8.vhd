library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

-- 8-bit combinational ALU
--   op  operation          carry flag
--   000 ADD   a + b        carry out
--   001 SUB   a - b        borrow (1 when a < b)
--   010 AND   a and b      0
--   011 OR    a or b       0
--   100 XOR   a xor b      0
--   101 NOT   not a        0
--   110 SHL   a shifted left by 1   bit shifted out (a(7))
--   111 SHR   a shifted right by 1  bit shifted out (a(0))
-- zero = 1 when result = 00000000
entity alu8 is
    Port ( a      : in  STD_LOGIC_VECTOR (7 downto 0);
           b      : in  STD_LOGIC_VECTOR (7 downto 0);
           op     : in  STD_LOGIC_VECTOR (2 downto 0);
           result : out STD_LOGIC_VECTOR (7 downto 0);
           carry  : out STD_LOGIC;
           zero   : out STD_LOGIC);
end alu8;

architecture Behavioral of alu8 is
begin
    process (a, b, op)
        variable ua : unsigned (7 downto 0);
        variable ub : unsigned (7 downto 0);
        variable t  : unsigned (8 downto 0);  -- bit 8 = carry / borrow / shifted-out bit
    begin
        ua := unsigned(a);
        ub := unsigned(b);

        case op is
            when "000"  => t := ('0' & ua) + ('0' & ub);   -- ADD
            when "001"  => t := ('0' & ua) - ('0' & ub);   -- SUB (bit 8 = borrow)
            when "010"  => t := '0' & (ua and ub);         -- AND
            when "011"  => t := '0' & (ua or ub);          -- OR
            when "100"  => t := '0' & (ua xor ub);         -- XOR
            when "101"  => t := '0' & (not ua);            -- NOT a
            when "110"  => t := ua & '0';                  -- SHL (bit 8 = old a(7))
            when "111"  => t := ua(0) & '0' & ua(7 downto 1); -- SHR (bit 8 = old a(0))
            when others => t := (others => '0');
        end case;

        result <= std_logic_vector(t(7 downto 0));
        carry  <= t(8);
        if t(7 downto 0) = 0 then
            zero <= '1';
        else
            zero <= '0';
        end if;
    end process;
end Behavioral;