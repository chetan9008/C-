#include<cmath>
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
    return (M_PI*r*r);
}
int main()
{
    int s=13;
    int l=2,b=3;
    float r = 3.3;
    cout << "Area of Square is : " <<area(s)<<endl;
    cout << "Area of Rectangle is : " <<area(l,b)<<endl;
    cout << "Area of Circle is : " <<area(r)<<endl;
    return 0;
}