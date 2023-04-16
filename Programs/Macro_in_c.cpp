#include<iostream>
using namespace std;
#define sum(a,b) (a+b)
#define cube(x) (x*x*x)
inline int square(int x) { return (x*x); }
int main()
{
    cout <<"sum of two no is " << sum(4,3) << endl;
    cout << "Cube of any no is " << cube(3) << endl;
    cout << "Square of no is : " << square(2); 
}