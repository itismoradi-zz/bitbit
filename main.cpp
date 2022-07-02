/*
    bitbit : Manufacturer of VHDL modules
*/

#include <fstream>
#include <iostream>
#include <cmath>
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

    vhdlFile << "\t\tsel: in std_logic_vector(3 downto 0);\n"
                "\t\tdataout: out std_logic_vector(n-1 downto 0)\n"
                "\t);\n"
                "end entity;\n\n";

    return 0;
}