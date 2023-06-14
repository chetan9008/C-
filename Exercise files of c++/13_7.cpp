#include <iostream>
using namespace std;
void function2(int a, int b)
{
    throw(b);
}
void function1(int a, int b)
{
    function2(a,b);
}
void function(int a, int b)
{
    function1(a,b);
}
void divide(int a, int b)
{
        if(b==0)
        function(a,b);
        else
        printf("%d/%d is %d",a,b,a/b);
}
int main()
{
    int a, b;
    cout << "Enter two number " << endl;
    cin >> a >> b;
    try
    {
        divide(a, b);
    }
    catch (...)
    {
        cout << "EXCEPTION OCCUR : " ;
        cout<< "Divide by zero" << endl;
    }
    return 0;
}