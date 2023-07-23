#include <iostream>
#include <typeinfo>
using namespace std;
class base
{
public:
    ~base()
    {
        cout << "Destroyed base class" << endl;
    }
};
class derived : public base
{
};
int main()
{
    base b;
    derived d;
    base *ptr = &d;
    int integer;
    cout << typeid(ptr).name() << endl;
    cout << typeid(*ptr).name() << endl;
    cout << typeid(integer).name() << endl;
    return 0;
}