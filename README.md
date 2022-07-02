# bitbit
Manufacturer of VHDL modules

# sample
creating multiplexer 8 to 1 with 8 bit inputs and output. 
```vhdl
library ieee;
use ieee.std_logic_1164.all;

entity mux_3 is
	generic(n: natural := 8);
	port(
		inp_0: in std_logic_vector(n-1 downto 0);
		inp_1: in std_logic_vector(n-1 downto 0);
		inp_2: in std_logic_vector(n-1 downto 0);
		inp_3: in std_logic_vector(n-1 downto 0);
		inp_4: in std_logic_vector(n-1 downto 0);
		inp_5: in std_logic_vector(n-1 downto 0);
		inp_6: in std_logic_vector(n-1 downto 0);
		inp_7: in std_logic_vector(n-1 downto 0);
		selector: in std_logic_vector(3 downto 0);
		dataout: out std_logic_vector(n-1 downto 0)
	);
end entity;

-------------- architecture --------------

architecture behavioral of mux_3 is
begin
	process(inp_0, inp_1, inp_2, inp_3, inp_4, inp_5, inp_6, inp_7, selector) is
	begin
		if(selector = "00000000") then
			dataout <= inp_0;
		elsif(selector = "00000001") then
			dataout <= inp_1;
		elsif(selector = "00000010") then
			dataout <= inp_2;
		elsif(selector = "00000011") then
			dataout <= inp_3;
		elsif(selector = "00000100") then
			dataout <= inp_4;
		elsif(selector = "00000101") then
			dataout <= inp_5;
		elsif(selector = "00000110") then
			dataout <= inp_6;
		elsif(selector = "00000111") then
			dataout <= inp_7;
		end if;
	end process;
end architecture;
```
