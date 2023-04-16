#include<iostream>
using namespace std;
int line(char ch = '*' , int length = 30);
float amount(float p,int n,float r=0.15);
int main()
{
    line();
    cout << "Amount is : " << amount(5000.0,5)<< endl;
    cout << "Amount By Explicit value is : " << amount(10000.0,5,0.30) << endl;
    line('=');
}
int line(char ch,int length)
{
    for(int i=0;i<length;i++)
    cout << ch ;
    cout << endl;
}
float amount(float p,int n,float r)
{
    float R=1;
    for(int i=0;i<n;i++)
    {
        R*=(1+r);
    }
    return (p*R);
}