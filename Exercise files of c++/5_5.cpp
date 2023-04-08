#include <iostream>
using namespace std;
class DM;
class DB;
class DB
{
    float feet, inches;
public:
    DB(float f, float i)
    {
        feet = f;
        inches = i;
    }
    friend class DM;
};
class DM
{
    float meter, centimeter;
public:
    DM(float m, float c)
    {
        meter = m;
        centimeter = c;
    }
    void convert(DB fvar,DM mvar)
    {
        float m,f;
        m = mvar.centimeter /100;
        m += mvar.meter;
        f = fvar.inches / 12;
        f+=fvar.feet;
        f *= 0.3048;
        m += f;
        int meter = m;
        m -= meter;
        m = m*100;
        cout << "Sum of given values is : " <<meter << " meters and ";
        cout << m <<" centimeters" <<endl;
    }
};
int main()
{
    DM meter(2.0,300.25);
    DB feet(3.0,20.0);
    meter.convert(feet,meter);
}