#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str[5];
    for(size_t i=0;i<5;i++)
    {
        cout << "Enter city : ";
        getline(cin,str[i]);
    }
    for(size_t i=0;i<5;i++)
    {
        cout << str[i] << endl;
    }
    cout << "City or Country named with b and c " << endl;
    for(size_t i=0;i<5;i++)
    {
        size_t found = str[i].find('b');
        size_t foundc = str[i].find('c');
        if(found != string::npos)
        {
            if(found == 0)
            {
                cout << str[i] << endl; 
            }
        }
        if(foundc != string::npos)
        {
            if(foundc == 0)
            {
                cout << str[i] << endl; 
            }
        }
    }
    return 0;
}