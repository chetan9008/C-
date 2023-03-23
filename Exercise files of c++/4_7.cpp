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
    cout << "Enter the m:";
    cin >> m;
    cout << "Enter the n:";
    cin >> n;
    double r = power(m,n);
    float s = power(m);
    cout << "Result is : " << r<< endl;
    cout << "Square is : " << s<< endl;
}