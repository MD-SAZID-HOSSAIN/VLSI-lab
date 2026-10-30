
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity program_rom_tb is
end program_rom_tb;

architecture sim of program_rom_tb is
    signal addr : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    signal data : STD_LOGIC_VECTOR (11 downto 0);

    -- Appendix B, Set 2 program; every other location is NOP (0x000)
    type rom_array is array (0 to 15) of STD_LOGIC_VECTOR (11 downto 0);
    constant EXP : rom_array := (
        0      => x"155",   -- LDI 0x55
        1      => x"6FF",   -- XOR 0xFF
        2      => x"700",   -- NOT
        3      => x"800",   -- SHL
        4      => x"256",   -- ADD 0x56
        5      => x"681",   -- XOR 0x81
        6      => x"800",   -- SHL
        others => x"000"    -- NOP
    );
begin
    UUT : entity work.program_rom
        port map (addr => addr, data => data);

    stim_proc : process
        variable errors : integer := 0;
    begin
        -- read every location; the ROM is combinational, so no clock is needed
        for a in 0 to 15 loop
            addr <= STD_LOGIC_VECTOR(to_unsigned(a, 4));
            wait for 10 ns;
            if data /= EXP(a) then
                errors := errors + 1;
                report "Address " & integer'image(a) & " MISMATCH: data=" &
                       integer'image(to_integer(unsigned(data))) &
                       " expected " &
                       integer'image(to_integer(unsigned(EXP(a))))
                       severity error;
            else
                report "Address " & integer'image(a) & " OK: data=" &
                       integer'image(to_integer(unsigned(data)));
            end if;
        end loop;

        if errors = 0 then
            report "*** program_rom_tb PASSED ***";
        else
            report "*** program_rom_tb FAILED, errors = " &
                   integer'image(errors) severity error;
        end if;
        wait;
    end process;
end sim;
