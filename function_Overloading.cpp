#include<iostream>
using namespace std;
int area(int s)
{
    return s*s;
}
int area(int l,int b)
{
    return l*b;
}
float area(float r)
{
    return (3.14*r*r);
}
int main()
{
    int s=13;
    int l=2,b=3;
    float r = 3.3;
    cout << area(s)<<endl;
    cout << area(l,b)<< endl;
    cout << area(r)<< endl;
    return 0;
}