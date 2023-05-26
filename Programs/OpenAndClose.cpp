#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    char code[100];
    ofstream output;
    output.open("country.html");
    output << "<p>Usa</p>\n<p>India</p>\n";
    output.close();
    output.open("capital.html");    
    output << "<p>Washinton DC</p>\n<p>New delhi</p>";
    output.close();
    ifstream input,input1;
    input.open("country.html");    
    input1.open("capital.html");
    while(1)
    {
        if(input.eof())
        exit(0);
        else
        {
            input.getline(code,100);
            cout << code<<endl;
        }
        if(input1.eof())
        exit(0);
        else
        {
            input1.getline(code,100);
            cout << code<<endl;
        }
    }
    input.close();
    input1.close();
}