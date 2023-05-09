#include<iostream>
using namespace std;
class base
{
    public:
    int b;
    void display()
    {
        cout << "b is : " << b << endl;
    }
};
class derived : public base
{
    public:
    int d;
    void display()
    {
        cout << "d is : " << d << endl;
    }
};
int main()
{
    base b;
    base *bptr = &b;
    bptr->b = 20;
    bptr->display();
    derived d;
    bptr = &d;
    bptr->b = 4;
    bptr->display();
    derived *dptr = &d;
    dptr->d = 44;
    dptr->display();
    ((derived *)bptr)->d = 55;
    ((derived *)bptr)->display();
    ((base *)bptr)->display();
    b.b = 33;
    b.display();
    d.base::display();
    dptr->b = 444;
    dptr->base::display();
}