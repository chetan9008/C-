#include<iostream>
using namespace std;
class object
{
    int id;
    public:
    object()
    {

    }
    object(int n)
    {
        id=n;
    }
    object(object &x)
    {
        id=x.id;
    }
    void display()
    {
        cout << id<<endl;
    }
};
int main()
{
    object o;
    o = object(100);
    cout << "Value By Paramaterized Constructor: ";
    o.display();
    object q(o);
    cout << "Value By Copy Constructor: ";
    q.display();
    // object r = q;
    // r.display();
}