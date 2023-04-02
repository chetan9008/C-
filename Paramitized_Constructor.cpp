#include <iostream>
using namespace std;
class thing
{
    int x, y, a, b;

public:
    thing(int xx, int yy,int aa,int bb)
    {
        x = xx;
        y = yy;
        a=aa;
        b=bb;
    }
    void display()
    {
        cout << x << endl;
        cout << y << endl;
        cout << a << endl;
        cout << b << endl;
    }
};
int main()
{
    // thing t = thing(2, 3);
    thing t(4,5,6,7);
    t.display();
}