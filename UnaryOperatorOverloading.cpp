#include<iostream>
using namespace std;
class unary
{
    int x,y,z;
    public:
    unary()
    {
        x=2,y=3,z=4;
    }
    void display()
    {
        cout << x<<endl<<y<<endl<<z<<endl;
    }
    void operator -();
    friend void operator +(unary &);
};
void unary :: operator -()
{
    x=-x;
    y=-y;
    z=-z;
}
void operator +(unary &u)
{
    u.x=-u.x;
    u.y=-u.y;
    u.z=-u.z;
}
int main()
{
    unary u;
    cout<<"normal class:"<<endl;
    u.display();
    cout << "class after overloading operator:"<<endl;
    -u;
    u.display();
    cout << "Class after friend operator overloading:"<<endl;
    +u;
    u.display();
}