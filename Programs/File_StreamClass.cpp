#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char code[300];
    gets(code);
    ofstream output("file.html");
    output << code <<"\n";
    output.close();
    ifstream input("file.html");
    input >> code;
    cout << "code is : " << code << endl;
    input.close();
    return 0;
}