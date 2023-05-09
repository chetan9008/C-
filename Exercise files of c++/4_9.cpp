#include<iostream>
#include<cmath>
using namespace std;
inline float area(float h,float b)
{
    return ((h*b)/2);
}
inline float area(float r)
{
    return (M_PI*r*r);
}
int main()
{
    float h,b;
    float r;
    cout << "Enter the height : ";
    cin >> h;
    cout << "Enter the base : ";
    cin >> b;
    cout << "Enter the radius : ";
    cin >> r;
    float t= area(h,b);
    float c = area(r);
    cout << "Area of traingle is : ";
    cout << t << endl;
    cout << "Area of circle is :";
    cout << c << endl;
}