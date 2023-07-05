#include<iostream>
#include<limits>
using namespace std;
int main()
{   
    string str;
    cout << "Enter :";
    cin >> str;
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    fflush(stdin);
    cout << "Enter again:";
    getline(cin,str);
    cout << "Entered string is " << str << endl;
    return 0;
}
