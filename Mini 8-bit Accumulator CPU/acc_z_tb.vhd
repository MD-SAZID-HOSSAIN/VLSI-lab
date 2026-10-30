
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity acc_z_tb is
end acc_z_tb;

architecture sim of acc_z_tb is
    signal clk    : STD_LOGIC := '0';
    signal reset  : STD_LOGIC := '0';
    signal acc_we : STD_LOGIC := '0';
    signal z_we   : STD_LOGIC := '0';
    signal result : STD_LOGIC_VECTOR (7 downto 0) := x"00";
    signal zero   : STD_LOGIC := '0';
    signal acc_q  : STD_LOGIC_VECTOR (7 downto 0);
    signal z_q    : STD_LOGIC;
    signal done   : boolean := false;

    constant T : time := 10 ns;

    -- one test step: inputs applied before the edge, expected ACC and Z after it
    type step_type is record
        rst : STD_LOGIC;
        aw  : STD_LOGIC;
        zw  : STD_LOGIC;
        res : STD_LOGIC_VECTOR (7 downto 0);
        zr  : STD_LOGIC;
        ea  : STD_LOGIC_VECTOR (7 downto 0);
        ez  : STD_LOGIC;
    end record;
    type step_array is array (natural range <>) of step_type;

    constant S : step_array := (
        ('1', '0', '0', x"00", '0', x"00", '1'),  -- reset: ACC = 00, Z = 1
        ('0', '1', '1', x"55", '0', x"55", '0'),  -- load 0x55 (non-zero)
        ('0', '0', '0', x"FF", '1', x"55", '0'),  -- no write enable: hold
        ('0', '1', '1', x"00", '1', x"00", '1'),  -- load 0x00 (zero flag = 1)
        ('0', '1', '1', x"81", '0', x"81", '0'),  -- load 0x81
        ('1', '1', '1', x"FF", '0', x"00", '1'),  -- reset beats write enable
        ('0', '1', '0', x"12", '0', x"12", '1'),  -- only ACC enabled, Z holds
        ('0', '0', '1', x"34", '0', x"12", '0')   -- only Z enabled, ACC holds
    );
begin
    UUT : entity work.acc_z
        port map (clk => clk, reset => reset, acc_we => acc_we, z_we => z_we,
                  result => result, zero => zero, acc_q => acc_q, z_q => z_q);

    clk_proc : process
    begin
        while not done loop
            clk <= '0'; wait for T/2;
            clk <= '1'; wait for T/2;
        end loop;
        wait;
    end process;

    stim_proc : process
        variable errors : integer := 0;
    begin
        wait for 2 ns;                      -- start between two clock edges
        for k in S'range loop
            reset  <= S(k).rst;
            acc_we <= S(k).aw;
            z_we   <= S(k).zw;
            result <= S(k).res;
            zero   <= S(k).zr;

            wait until rising_edge(clk);
            wait for 1 ns;                  -- sample just after the edge

            if (acc_q /= S(k).ea) or (z_q /= S(k).ez) then
                errors := errors + 1;
                report "Step " & integer'image(k) & " MISMATCH: ACC=" &
                       integer'image(to_integer(unsigned(acc_q))) &
                       " Z=" & STD_LOGIC'image(z_q)
                       severity error;
            else
                report "Step " & integer'image(k) & " OK: ACC=" &
                       integer'image(to_integer(unsigned(acc_q))) &
                       " Z=" & STD_LOGIC'image(z_q);
            end if;
        end loop;

        if errors = 0 then
            report "*** acc_z_tb PASSED ***";
        else
            report "*** acc_z_tb FAILED, errors = " &
                   integer'image(errors) severity error;
        end if;

        done <= true;
        wait;
    end process;
end sim;