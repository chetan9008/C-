#include<iostream>
using namespace std;
typedef void (*ptr)(int,int);
void sub(int a,int b)
{
    cout <<  a << " - " << b << " is " << a-b << endl;
}
void add(int a,int b)
{
    cout <<  a << " + " << b << " is " << a+ b << endl;
    void (*sub_ptr)(int,int) = sub;
    sub_ptr(a,b);
}

int main()
{
    ptr p;
    p = add;// p = &add is also works
    p(3,2);
}