#include<iostream>
using namespace std;
inline int cube(int x)
{
    return(x*x*x);
}
inline int sum(int a,int b) { return a+b; }
int main()
{
    int x=3;
    cout << "Cube of " << x <<" is : " << cube(x)<<endl;
    cout << "(Another Feature)Cube of " << x <<" is : " << cube(2+1)<<endl;

    cout << "sum By Inline function is :" << sum(x,x)<<endl;
}