
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity control_unit_tb is
end control_unit_tb;

architecture sim of control_unit_tb is
    signal opcode  : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    signal alu_sel : STD_LOGIC_VECTOR (2 downto 0);
    signal acc_we  : STD_LOGIC;
    signal z_we    : STD_LOGIC;

    -- expected outputs for opcode 0 .. 15 (Set 2: LDI, ADD, XOR, NOT, SHL)
    type sel_array is array (0 to 15) of STD_LOGIC_VECTOR (2 downto 0);
    constant EXP_SEL : sel_array := (
        "000",  -- 0000 NOP
        "001",  -- 0001 LDI
        "010",  -- 0010 ADD
        "000",  -- 0011 not in Set 2 -> NOP
        "000",  -- 0100 not in Set 2 -> NOP
        "000",  -- 0101 not in Set 2 -> NOP
        "011",  -- 0110 XOR
        "100",  -- 0111 NOT
        "101",  -- 1000 SHL
        "000", "000", "000", "000", "000", "000", "000");  -- 1001 .. 1111
    constant EXP_WE : STD_LOGIC_VECTOR (0 to 15) := "0110001110000000";
begin
    UUT : entity work.control_unit
        port map (opcode => opcode, alu_sel => alu_sel,
                  acc_we => acc_we, z_we => z_we);

    stim_proc : process
        variable errors : integer := 0;
    begin
        for k in 0 to 15 loop
            opcode <= STD_LOGIC_VECTOR(to_unsigned(k, 4));
            wait for 10 ns;
            if (alu_sel /= EXP_SEL(k)) or (acc_we /= EXP_WE(k)) or
               (z_we /= EXP_WE(k)) then
                errors := errors + 1;
                report "Opcode " & integer'image(k) & " MISMATCH: alu_sel=" &
                       integer'image(to_integer(unsigned(alu_sel))) &
                       " acc_we=" & STD_LOGIC'image(acc_we) &
                       " z_we=" & STD_LOGIC'image(z_we)
                       severity error;
            else
                report "Opcode " & integer'image(k) & " OK: alu_sel=" &
                       integer'image(to_integer(unsigned(alu_sel))) &
                       " acc_we=" & STD_LOGIC'image(acc_we) &
                       " z_we=" & STD_LOGIC'image(z_we);
            end if;
        end loop;

        if errors = 0 then
            report "*** control_unit_tb PASSED ***";
        else
            report "*** control_unit_tb FAILED, errors = " &
                   integer'image(errors) severity error;
        end if;
        wait;
    end process;
end sim;
