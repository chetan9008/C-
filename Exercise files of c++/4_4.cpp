#include<iostream>
using namespace std;
int area(int l,long int b=3)
{
    return l*b;
}
int area(int l,int b)
{
    return l*b;
}
int main()
{
    int l=4,b=4;
    cout << "Area with Default arguments is : " << area(l);
    cout << endl<< "Area without Default arguments is :" << area(l,b);
}