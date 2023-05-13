#include<iostream>
using namespace std;
class base
{
    public:
    void display()
    {
        cout << "Base class"<< endl;
    }
    virtual void show()
    {
        cout << "Base class function " << endl;
    }
};
class derived : public base
{
    public:
    void display()
    {
        cout << "Derived class " << endl;
    }
    void show()
    {
        cout << "Derived class function " << endl;
    }
};
int main()
{
    base b;
    derived d;
    base *ptr;
    ptr = &b;
    cout << "Invoking base function : " << endl;
    ptr->display();
    ptr->show();
    d.base :: display();
    d.base :: show();
    cout << "Invoking derived functions : " << endl;
    ptr = &d;
    ((derived *)ptr)->display();
    ((derived *)ptr)->show();
    d.display();
    d.show();
    return 0;
}