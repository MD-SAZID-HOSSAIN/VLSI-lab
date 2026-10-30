library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity cpu_top is
    Port ( clk    : in  STD_LOGIC;
           reset  : in  STD_LOGIC;
           q      : out STD_LOGIC_VECTOR (7 downto 0);   -- ACC
           z      : out STD_LOGIC;                       -- Z flag
           pc_out : out STD_LOGIC_VECTOR (3 downto 0));  -- PC (for checking)
end cpu_top;

architecture Structural of cpu_top is
    signal pc_s      : STD_LOGIC_VECTOR (3 downto 0);
    signal instr     : STD_LOGIC_VECTOR (11 downto 0);
    signal alu_sel_s : STD_LOGIC_VECTOR (2 downto 0);
    signal acc_we_s  : STD_LOGIC;
    signal z_we_s    : STD_LOGIC;
    signal acc_s     : STD_LOGIC_VECTOR (7 downto 0);
    signal result_s  : STD_LOGIC_VECTOR (7 downto 0);
    signal zero_s    : STD_LOGIC;
    signal z_s       : STD_LOGIC;
begin
    U_PC  : entity work.program_counter
        port map (clk => clk, reset => reset, pc_out => pc_s);

    U_ROM : entity work.program_rom
        port map (addr => pc_s, data => instr);

    U_CU  : entity work.control_unit
        port map (opcode => instr(11 downto 8), alu_sel => alu_sel_s,
                  acc_we => acc_we_s, z_we => z_we_s);

    U_ALU : entity work.alu
        port map (acc => acc_s, imm => instr(7 downto 0), alu_sel => alu_sel_s,
                  result => result_s, zero => zero_s);

    U_ACC : entity work.acc_z
        port map (clk => clk, reset => reset, acc_we => acc_we_s, z_we => z_we_s,
                  result => result_s, zero => zero_s, acc_q => acc_s, z_q => z_s);
						
    q      <= acc_s;
    z      <= z_s;
    pc_out <= pc_s;
end Structural;