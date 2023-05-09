#include<iostream>
#include<math.h>
using namespace std;
float power(float m,int n=2)
{
    return pow(m,n);
}
double power(double m,int n)
{
    return pow(m,n);
}
int main()
{
    double m;
    int n;
    cout << "Enter the base:";
    cin >> m;
    cout << "Enter the power:";
    cin >> n;
    double r = power(m,n);
    float s = power(m);
    cout << m << "^" << n << " is :" << r<< endl;
    cout << m << "^"<< "2"<<  " is : " << s<< endl;
}