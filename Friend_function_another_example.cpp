#include<iostream>
using namespace std;
class first;
class second
{
    int y;
    public:
    void putdata(int data)
    {
        y=data;
    }
    friend int add(first ,second);
};
class first
{
    int x;
    public:
    void putdata(int data)
    {
        x=data;
    }
    friend int add(first ,second);
};
int add(first f,second s)
{
    return ((f.x+s.y));
}
int main()
{
    first x;
    second y;
    x.putdata(20);
    y.putdata(3);
    cout << "Adding two number is : " << add(x,y);
}