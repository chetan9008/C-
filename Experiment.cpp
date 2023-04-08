#include<iostream>
using namespace std;
class r
{
    int w;
    int h;
    static int c;
    public:
    r()
    {
        w=12;
        h=9;
    }
    r(r&ro)
    {
        w=ro.w;
        h=ro.h;
        c++;
        cout << "c is : " << c <<endl;
    }
    void display()
    {
        cout << c;
    }
};
int r :: c = 0;
int main()
{
    r o1;
    r o2(o1);
    r o3 = o1;
    r o4;
    // o4 = o3;
    o4.display();
}