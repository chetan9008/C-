#include<iostream>
using namespace std;
void divide(int a,int b)
{
    if(b== 0)
    throw(b);else
    {
        cout << a << "/" << b << " is : " << a/b << endl;
    }
}
int main()
{
    try
    {
    divide(10,0);
    divide(2,3);
    }
    catch(int x)
    {
        cout << "EXCEPTION OCCUR : divide by zero" << endl;
    }
    return 0;
}