#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream output;
    output.open("capital.html",ios :: out);
    output << "<b>Usa</b>\n<b>India</b>\n<b>WestIndies</b>\n<p>Agrentina</p>";
    cout << output.tellp() << endl;
    output.seekp(-20,ios :: cur);
    cout << output.tellp() << endl;
    output.seekp(0,ios :: end);
    cout << output.tellp() << endl;
    output.close();
    ifstream input;
    input.open("capital.html",ios :: in|ios :: app);
    input.seekg(10);
    cout << input.tellg() << endl;
    input.seekg(-30,ios :: end);
    cout << input.tellg() << endl;
    input.seekg(0,ios :: cur);
    cout << input.tellg() << endl;

}