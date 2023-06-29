#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    string str;
    cout << "Enter string :";
    cin >> str;  
    cout << "Entered string is " << str << endl;
    cout << "Enter string :";
    fflush(stdin);
    getline(cin,str); 
    cout << "Entered string is " << str << endl;
    return 0;
}