#include <iostream>
#include <string.h>
using namespace std;
void read(int &a, int &b)
{
    cout << "Enter first number :" << endl;
    cin >> a;
    cout << "Enter second number " << endl;
    fflush(stdin);
    cin >> b;
}
void divide(int a,int b)
{
    try
    {
        if(b==0)
        throw(b);
        else
        printf("%d/%d is %d",a,b,a/b);
    }
    catch(...)
    {
        throw;
    }
}
int main()
{
    int a, b;
    read(a, b);
    try
    {
        divide(a,b);
    }
    catch(...)
    {
        cout << "EXCEPTION FOUND: ";
        cout << "Divison by zero" << endl;
    }
    
    return 0;
}