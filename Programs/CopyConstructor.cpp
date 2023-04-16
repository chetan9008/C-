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
    o.display();
    object p(100);
    p.display();
    object q(p);
    q.display();
    object r = q;
    r.display();
}