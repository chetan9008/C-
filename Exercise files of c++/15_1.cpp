#include<string>
#include<iostream>
using namespace std;
int main()
{
    string str1,str2,str3;
    cout << "Enter first string : " ;
    getline(cin,str1);
    cout << "Enter second string : " ;
    getline(cin,str2);
    cout << "Enter third string : " ;
    getline(cin,str3);
    string ch = str1+" "+str2+" "+str3;
    cout << ch << endl;
    string append;
    append.append(str1+str2+str3);
    cout << append << endl;
    return 0;
}