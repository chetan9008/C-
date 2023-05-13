#include <iostream>
#include<cmath>
using namespace std;
class shape
{
protected:
    float x, y;

public:
    void get_data(float a, float b=0)//very important
    {
        x = a;
        y = b;
    }
    virtual void display() {}
};
class traingle : public shape
{
    float area;

public:
    // void display()
    // {
    //     area = (1.0 / 2.0) * x * y;
    //     cout << "Area of traingle:" << endl;
    //     cout << "Whose base is " << x << " and hieght is : " << y << endl;
    //     cout << area << endl;
    // }
};
class rectangle : public shape
{
    float area;

public:
    void display()
    {
        area = x * y;
        cout << "Area of rectangle:" << endl;
        cout << "Whose length is " << x << " and breadth is : " << y << endl;
        cout << area << endl;
    }
};
class circle:public shape{
    float area;
    public:
    void display()
    {
        area = M_PI * x * x;
        cout << "Area of Circle:" << endl;
        cout << "Whose radius is " << x  <<endl;
        cout << area << endl;
    }
};
int main()
{
    traingle *t = new traingle;
    t->get_data(2.3, 33.3);
    t->display();
    rectangle *r = new rectangle;
    r->get_data(2.2,3.3);
    r->display();
    circle *c = new circle;
    c->get_data(3.3);
    c->display();
    return 0;
}