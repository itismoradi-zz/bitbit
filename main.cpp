/*
    bitbit : Manufacturer of VHDL modules
*/

#include <fstream>
#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

int main()
{
    unsigned int muxSelectSize;

    cout << "--- bitbit ---" << endl;
    cout << "Enter Mux select size : ";
    cin >> muxSelectSize;
    ofstream vhdlFile("main.vhd", ios::out);

    // Write vhdl file with syntax rules
    vhdlFile << "library ieee;\n"
                "use ieee.std_logic_1164.all;\n\n";

    // entity part
    vhdlFile <<  "entity mux_" << muxSelectSize <<  " is\n"
                "\tgeneric(n: natural);\n"
                "\tport(\n";

    // input ports
    int numberOfInputs = pow(2, muxSelectSize);
    for (size_t i = 0; i < numberOfInputs; i++)
    {
        vhdlFile << "\t\tinp_"<< i << ": in std_logic_vector" << "(n-1 downto 0);" << endl;
    }

    vhdlFile << "\t\tselector: in std_logic_vector(3 downto 0);\n"
                "\t\tdataout: out std_logic_vector(n-1 downto 0)\n"
                "\t);\n"
                "end entity;\n\n";
                
    // architecture part
    vhdlFile << "architecture behavioral of " << "mux_" << muxSelectSize << " is\n"
                "begin\n";

    // process part
    vhdlFile << "\tprocess(";
    for (size_t i = 0; i < numberOfInputs; i++)
    {
        vhdlFile << "inp_" << i << ", ";
    }
    vhdlFile << "selector"
                ") is\n"
                "\tbegin\n";
    for (size_t i = 0; i < numberOfInputs; i++)
    {
        vhdlFile << "\t\tif(sel = \"" << std::bitset<4>(i) << "\") then\n"
                    "\t\t\tdataout <= inp_" << i << ";\n";
    }
    vhdlFile << "\t\tend if;\n"
                "\tend process;\n";

    vhdlFile << "end architecture;";
    return 0;
}