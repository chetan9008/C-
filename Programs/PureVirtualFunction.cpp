#include<iostream>
using namespace std;
class base
{
    public:
    virtual void display() = 0;
};
class derived_first : public base
{
    public:
    void display()
    {
        cout << "This is first derived class " << endl;
    }
};
class derived_second : public base
{
    public:
    void display()
    {
        cout << "This is second derived class " << endl;
    }
};
int main()
{
    derived_first f;
    derived_second s;
    base *b[2];
    b[0] = &f;
    b[1] = &s;
    b[0]->display();
    b[1]->display();
    return 0;
}   