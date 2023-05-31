#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    fstream file;
    file.open("number.txt",ios :: in| ios :: out | ios :: ate);
    file.seekg(0);
    cout << "file pointer is at : " << file.tellg() << endl;
    
}