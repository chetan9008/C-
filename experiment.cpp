#include<windows.h>
#include<iostream>
using namespace std;
namespace functions
{
    int add(int a,int b)
    {
        return(a+b);
    }
    int multiply(int,int);
}
int functions::multiply(int a,int b)
{
    return(a*b);
}
using namespace functions;
int main()
{
    cout << "2+3 is : " << add(2,3)<<endl;
    cout << "2*3 is : " << multiply(2,3) << endl;
    return 0;
}