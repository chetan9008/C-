#include<bits/stdc++.h>
using namespace std;
class base
{
    protected:
    int data;
    public:
    base(int x)
    {
        data  = x;
    }
};
class derived:public base
{
    public:
    derived(int x):base(x)
    {}
    void display()
    {
        cout << data << endl;
    }
};
int main()
{
    derived d(2);
    d.display(); 
    return 0;
}