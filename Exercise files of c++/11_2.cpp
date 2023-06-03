#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    ofstream output("11_2_telephone.txt");
    output << "Name      Telephone\nJohn       1234\nAhmed      98756\nChetan     701734";
    output.close();
    ifstream input;
    input.open("11_2_telephone.txt",ios :: in);
    char ch;
    while(input.good())
    {
        input.get(ch);
        cout << ch;
    }   
    return 0;
}