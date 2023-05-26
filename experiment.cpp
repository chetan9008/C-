#include <iostream>
#include <fstream>
int const size = 300;
using namespace std;
int main()
{
    char code[size];
    ofstream output;
    output.open("country.html");
    output << "<p>Usa</p>\n<p>India</p>\n";
    output.close();
    output.open("capital.html");
    output << "<p>Washinton DC</p>\n<p>New delhi</p>";
    output.close();
    ifstream inp1, inp2;
    inp1.open("capital.html");
    inp2.open("country.html");
    while (1)
    {
            if(inp1.eof())
            exit(0);
            inp1.getline(code, size);
            cout << code << endl;
            if(inp2.eof())
            exit(0);
            inp2.getline(code, size);
            cout << code << endl;
    }

    inp1.close();
    inp2.close();
    return 0;
}