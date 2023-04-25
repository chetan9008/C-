#include <iostream>
#include<cmath>
using namespace std;
class polar
{
    float r,a;
    public:
    polar()
    {

    }
    polar(float xx,float yy)
    {
        r= xx;
        a = yy;
    }
    friend ostream & operator << (ostream  &console,polar p)
    {
        console << p.r << endl;
        console << p.a << endl;
        return(console);
    }
    friend class rectangle;
   
};
class rectangle
{
    float x,y;
    public:
    rectangle()
    {

    }
    rectangle(float xx,float yy)
    {
        x= xx;
        y = yy;
    }
    friend ostream & operator << (ostream  &console,rectangle p)
    {
        console << p.x << endl;
        console << p.y << endl;
        return(console);
    }
    operator polar()
    {
        polar temp;
        temp.r = sqrt((pow(x,2)+pow(y,2)));
        temp.a = atan(y/x);
        return temp;
    }
    rectangle(polar p)
    {
        x =  p.r * cos(p.a);
        y = p.r * sin(p.a);
    }
};
int main()
{
    polar p;
    rectangle r;
    // p  = polar(3,4);
    // cout << p;
    r = rectangle(16,51);
    cout << r;
    p = r;
    cout << p;
    r = p;
    cout << r;
}