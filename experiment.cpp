#include<bits/stdc++.h>
using namespace std;
class base
{
    protected:
    double x,y;
    public:
    void get(double xx,double yy)
    {
        x =xx ;
        y = yy;
    }
    virtual void display() =0;
};
class traingle : public base
{
    public:
    void display()
    {
        cout << "Area is " << ((1.0/2.0) * x * y);
    }
};
int main()
{
    traingle *t = new traingle;
    t->get(2.2,3.3);
    t->display();
    return 0;
}