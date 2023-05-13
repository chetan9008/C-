#include<iostream>
using namespace std;
class A
{
    protected:
    int a,b;
    public:
    A(int x=0,int y=0)
    {
        a = x;
        b = y;
    }
    virtual void print();
};
class B : public A
{
    float p,q;
    public:
    B(int m,int n,float u,float v)
    {
        p = u;
        q = v; 
    }
    B() {p = q = 0;}
    void input(float u,float v);
    virtual void print(float);
};
void A :: print (void)
{
    cout << "A values :" << a << " " << b  << endl;
}
void B :: print (float)
{
    cout << "B values :" << p << " " << q  << endl;
}
void B :: input (float x,float y)
    {
         p = x;
         q = y;
    }
int main()
{
    A a1(10,20),*ptr;
    B b1;
    b1.input(7.5,3.142);
    ptr = &a1;
    ptr->print();
    ptr = & b1;
    ptr->print();
}