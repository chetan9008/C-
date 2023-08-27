#include <bits/stdc++.h>
using namespace std;
class base
{
protected:
    int b;

public:
    base(int x)
    {
        b = x;
        cout << "Base class "  << endl;
    }
};
class derived1:public base 
{
    protected:
    int d;
    public:
    derived1(int x,int y):base(x),d(y)
    {
        cout << "Derived 1 class" << endl;
    }
};
class derived2:public derived1
{
    public:
    derived2(int x,int y):derived1(x,y)
    {
        cout << "Derived 2 class" << endl;
    }
    void display();
};
void derived2::display()
{
    cout << "Base class value is " << b << endl;
    cout << "Derived class value is " << d << endl;
}
int main()
{
    derived2 d(2,3);
    d.display();
    return 0;
}