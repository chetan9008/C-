#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    char string[400];
    fstream file;
    file.open("capital.html",ios :: in| ios :: out | ios :: ate);
    file.seekg(0);
    while(file.good())
    {
        file.getline(string,400);
        cout << string << endl;
    }
    file.seekg(0);
    file.close();
    file.open("country.html",ios :: in| ios :: ate);
    file.seekg(0);    
    cout << "file pointer is at : " << file.tellg() << endl;
    while(!file.fail())
    {
        file.getline(string,400);
        cout << string << endl;
    }
    return 0;
}