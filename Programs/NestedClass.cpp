#include <iostream>
using namespace std;
class first
{
public:
    int i;

public:
    first(int j)
    {
        i = j;
        cout << "First is initilized" << endl;
    }
    void firstd()
    {
    }
};
class second
{
protected:
    int x, y;

public:
    second(int a, int b) : x(a), y(b)
    {
        cout << "Second is initilized" << endl;
    }
    void secondd()
    {
        cout << "Second class details :" << endl;
        cout << " x = " << x << endl;
        cout << " y = " << y << endl;
    }
};
class nested
{
    int n;
    second s;
    first f;

public:
    nested(int x, int a, int b) : f(x), s(a, b), n(a + b)
    {
        cout << "Nested is intilized" << endl;
    }
    void display();
};
void nested ::display()
{
    cout << "All data :" << endl;
    // f.firstd();
    cout << "First class details :" << endl;
    cout << " i = " << f.i << endl;
    s.secondd();
    cout << "Nested class details :" << endl;
    cout << " n = " << n << endl;
}

int main()
{
    nested n(1, 10, 20);
    n.display();
    return 0;
}