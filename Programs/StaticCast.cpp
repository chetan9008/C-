#include <iostream>
#include <cstring>
using namespace std;
class test
{
    int data;

public:
    test() {}
    test(int x)
    {
        data = x;
    }
    void display()
    {
        cout << data << endl;
    }
};
int main()
{
    int a = 4;
    cout << static_cast<char>(a) << endl;

    test t;
    t = static_cast<test>(2);
    t.display();
}