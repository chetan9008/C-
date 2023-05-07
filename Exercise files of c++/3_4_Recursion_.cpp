#include<iostream>
using namespace std;
float R(float r,int n)
{
        if(n==0)
        return 1;
        else
        return r*R(r,n-1);
}
int main()
{
    int p=1000,n=10;
    float r=.10,v;
    cout << "Principal amount : "<< p<< endl;
    cout << "Rate is : "<< r<< endl;
    cout << "Years is : " << n << endl;
    r=(1+r);
    r=R(r,n);
    v = float(p) * r;
    cout << "Amount is : " << v ;
}