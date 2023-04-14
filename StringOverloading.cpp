#include <iostream>
using namespace std;
class sum
{
    float x, y;

public:
    sum()
    {
    }
    sum(float i, float j)
    {
        x = i;
        y = j;
    }
    sum operator+(sum s)
    {
        // sum temp;
        // temp.x = x + s.x;
        // temp.y = y + s.y;
        // return temp;
        return sum((x+s.x),(y+s.y)); // short hand
    }
    friend sum operator-(sum s,sum s1);
    friend sum operator*(int s,sum s1);
    void display();
};
sum operator - (sum s,sum s1)
{
    // return sum((s.x-s1.x),(s.y-s1.y));
    sum temp;
    temp.x = s.x - s1.x;
    temp.y = s.y - s1.y;
    return temp;
}
sum operator*(int s,sum s1)
{
    return sum((s*s1.x),(s*s1.y));
}
void sum :: display()
{
    cout << "x is : "<< x<< " and y is : "<< y<<endl;
}
int main()
{
    sum s1, s2, s3;
    s1 = sum(2.0, 3.0);
    s2 = sum(3.0, 2.0);
    // s3  = s1 + s2;
    s3 = s1.operator+(s2);
    s1.display();
    s2.display();
    s3.display();
    sum s4 = s1 - s2;
    s4 = operator-(s1,s2);
    s4.display();
    sum s5 = 3 * s1;
    s5.display();
    return 0;
}