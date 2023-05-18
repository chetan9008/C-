#include<cmath>
#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
    float x = 22.0/7.0;
    cout.fill('*');
    cout.width(20);
    cout.setf(ios :: left,ios :: adjustfield);
    cout << x << endl;
    cout.setf(ios :: scientific,ios ::floatfield);
    cout << (22.0/7.0) << endl;
    cout.fill('*');
    cout.width(20);
    cout.setf(ios :: fixed , ios :: floatfield);
    cout.setf(ios :: right,ios :: adjustfield);
    cout << x << endl;
    cout.fill('*');
    cout.width(20);
    cout.setf(ios :: internal,ios :: adjustfield);
    cout << -12.38894 << endl;


    int y = 92;
    cout.setf(ios :: dec,ios :: basefield);
    cout << y << endl;
    cout.setf(ios :: oct,ios :: basefield);
    cout << y << endl;
    cout.setf(ios :: hex,ios :: basefield);
    cout << y << endl;
    return 0;
}