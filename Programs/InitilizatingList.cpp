#include <iostream>
using namespace std;
class first
{
protected:
    int f;
public:
    first(int i)
    {
        f = i;
        cout << "First is initilized" << endl;
    }
};
class second
{
protected:
    int x, y;
public:
    second(int i, int j) : x(i), y(i + j)
    {
        cout << "second is initilized" << endl;
    }
};
class multiple : public second, public first
{
    int m,n;
    public:
    multiple(int i,int x,int y):first(i),second(x,x),m(y)
    {
        n = y * y;
        cout << "Muliple is initilized"<< endl;
    }
    void display()
    {
        cout << "All data :"<< endl;
        cout << "First class details :" << endl;
        cout << " f = "<< f<< endl;
        cout << "Second class details :" << endl;
        cout << " x = "<< x<< endl;
        cout << " y = "<< y<< endl;
        cout << "Multiple class details :" << endl;
        cout << " m = "<< m<< endl;
        cout << " n = "<< n<< endl;
    }
};
int main()
{
    multiple m(1,10,20);
    m.display();
}