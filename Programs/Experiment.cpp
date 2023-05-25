#include<iostream>
using namespace std;
class first
{
    protected:
    int f;
    public:
    first(int a)
    {
        f = a;
    }
    virtual void display() = 0;
    ~first()
    {
        cout << "Object is destroyed"<< endl;
    }
};
class second : public first
{
    public:
    second(int a):first(a)
    {
    }
    void display()
    {
        cout << "value is " << f << endl; 
    }
    ~second()
    {
        cout << "Second object is destroyed"<< endl;
    }
};
int main()
{
    first *ptr;
    second s(3);
    ptr = &s;
    ptr->display();
    return 0;
}