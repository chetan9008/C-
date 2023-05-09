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
     cout << "Length : " << l <<endl;
    cout << "Breadth : " << 3 << endl;
    cout << "Area with Default arguments is : " << area(l)<<endl;
     cout << "Length : " << l <<endl;
    cout << "Breadth : " << b ;
    cout << endl<< "Area without Default arguments is :" << area(l,b);
}