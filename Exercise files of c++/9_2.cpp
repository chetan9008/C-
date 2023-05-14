#include <iostream>
using namespace std;
class integer
{
    int x;

public:
    integer(int a)
    {
        x = a;
    }
    friend void swap_data(integer &a, integer &b)
    {
        int temp;
        temp = a.x;
        a.x = b.x;
        b.x = temp;
    }
    friend void display(integer a, integer b)
    {
        cout << "First is  : " << a.x << endl;
        cout << "Second is : " << b.x << endl;
    }
};
int main()
{
    integer *a = new integer(2);
    integer *b = new integer(3);
    display(*a,*b);
    swap_data(*a,*b);
    display(*a,*b);
    return 0;
}