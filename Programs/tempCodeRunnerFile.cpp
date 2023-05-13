#include<iostream>
using namespace std;
class base
{
    int a;
    public:
    void set(int b)
    {
        a = b;
    }
    void display()
    {
        cout << "a is : " << a << endl;
    }
};
int main()
{
    base *arr ;
    base b;
    arr  = b;
    arr->set(3);
    arr->display();
    return 0;
}
