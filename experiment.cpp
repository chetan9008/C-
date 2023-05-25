#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outf("randi.html");
    char script[200];
    cout << "Enter the code";
    gets(script);
    outf << script << "\n";
    outf.close();
    ifstream input("randi.html");
    input >> script ;
    cout << script << endl;
    return 0;
}