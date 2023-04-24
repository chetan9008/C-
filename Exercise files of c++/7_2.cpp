#include<iostream>
#include<cmath>
using namespace std;
class polar
{
    float x,y;
    float radius,angle;
    public:
    polar(){}
    polar(float r,float a)
    {
        x = r * cos(a);
        y = r*sin(a);
        radius = r;
        angle= a;
    }
    friend ostream & operator <<(ostream &print,polar p)
    {
        print << p.x<<endl;
        print<<p.y<<endl;
        print<<p.radius<<endl;
        print<<p.angle<<endl;
        return(print);
    }
    polar operator+(polar );
};
polar polar :: operator+(polar p)
{
   polar temp;
   temp.x = x + p.x;
   temp.y = y + p.y;
   temp.angle = atan(y/x);//atan is arc tangent
   temp.radius = sqrt(x*x + y*y);
   return(temp);
}
int main()
{
    polar p1,p2;
    p1 = polar(5,45);
    p2 = polar(6,-120);
    polar p3 = p1 + p2;
    cout << "Polar 1 :"<<endl;
    cout << p1;
    cout << "Polar 2 :"<<endl;
    cout << p2;
    cout << "Polar 3 :"<<endl;
    cout << p3;
}