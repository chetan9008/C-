#include<iostream>
using namespace std;
void divide(int a,int b)
{
    try
    {
        if(b==0)
        throw(b);
        else
        printf("%d/%d is %d",a,b,a/b);
    }
    catch(int b)
    {
        cout << "Division Error" << endl;
        throw;
    }
}
int main()
{
    int a,b;
    a = 2,b=0;
    try
    {
        divide(a,b);
    }
    catch(...)
    {
        cout << "Exception arrived in main" << endl;
    }
    
    return 0;
}