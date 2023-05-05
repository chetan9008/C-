#include<iostream>
#include<cmath>
using namespace std;
inline int cube(int x)
{
    return(x*x*x);
}
inline int sum(int a,int b) { return a+b; }
inline float area(float r){ return(M_PI*r); }
int main()
{
    int x=3;
    cout << "Cube of " << x <<" is : " << cube(x)<<endl;
    cout << "sum is :" << sum(x,x)<<endl;
    cout << "Area of circle is :" << area(float(x))<<endl;
}