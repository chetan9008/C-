#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter the first Number:"; cin >> a;
    cout << "\nEnter the second Number:"; cin >> b;
    if(a>b)
    cout << "Largest No is :" << a;
    else
    cout << "Largest No is:" << b;
    return 0;
}