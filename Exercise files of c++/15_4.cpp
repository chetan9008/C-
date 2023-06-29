#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string : ";
    getline(cin,str);
    for(size_t i=0;i<str.size();i++)
    {
        if(str.at(i) == ' ')
        {
            str.replace(i,1,"...");
        }
    }
    cout << str << endl;
    return 0;
}