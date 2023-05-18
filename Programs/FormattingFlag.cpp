#include<cmath>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    cout << "VALUE";
    cout.fill('*');
    cout.width(25);
    cout << "SQRT OF VALUE"<<endl;
    for(int i=1;i<=10;i++)
    {
        cout.setf(ios :: showpos);
        cout.setf(ios :: internal,ios :: adjustfield);
        cout.width(5);
        cout.fill('.');
        cout << i ;
        cout.width(20);
        cout.precision(4);
        cout.setf(ios :: right,ios :: adjustfield);
        cout.setf(ios :: showpoint);
        cout << sqrt(i)<< endl;
    }
    cout << "SQRT(100) = ";
    cout.setf(ios::showpos);
    cout.setf(ios :: scientific, ios :: floatfield);
    cout << sqrt(100)<< endl;
}