#include<iomanip>
#include<iostream>
using namespace std;
ostream & decimal(ostream &print)
{
    print << setw(10) << setiosflags(ios :: right) << setprecision(2) << setfill('*') << setiosflags(ios :: showpoint);
}
int main()
{
   float x = 2.0;
    cout << decimal << x << endl;
}