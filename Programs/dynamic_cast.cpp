#include <iostream>
using namespace std;
class base
{
public:
    virtual void display()
    {
        cout << "Base class" << endl;
    }
};
class derived_1 : public base
{
public:
    void display()
    {
        cout << "Derived_1 class" << endl;
    }
};
class derived_2 : public base
{
public:
    void display()
    {
        cout << "Derived_2 class" << endl;
    }
};
int main()
{
    derived_1 d1;

    base *b = dynamic_cast<base *>(&d1);
    derived_1 *d2 = dynamic_cast<derived_1 *>(b);
    //    derived_2 *d2 = dynamic_cast<derived_2*>(b);
    //	this in not valid
    if (d2 == NULL)
    {
        cout << "NUll" << endl;
    }
    else
    {
        cout << "Not null" << endl;
    }
    d2->display();
    //    d2->display();
    // base *b = &d1;
    // b->display();

    base &r1 = dynamic_cast<base &>(d1);
    r1.display();
    try
    {
        derived_2 &d = dynamic_cast<derived_2 &>(r1);
    }
    catch (std::exception &e)
    {
        cout << e.what() << endl;
    }
    //    d.display();

    return 0;
}