#include<iostream>
using namespace std;
class construct
{
    int x,y;
    public:
    construct();
    construct(int a)
    {
        x=y=a;
    }
    construct(int a,int b)
    {
        x=a;
        y=b;
    }
    friend construct sum(construct a,construct b);
    friend void display(construct );
};
construct sum(construct a,construct b)
{
    construct c;
    c.x = a.x +b.x;
    c.y = a.y + b.y;
    return c;
}
void display(construct a)
{
    cout << a.x<<endl;
    cout << a.y<<endl;
}
construct :: construct()
{
    x=y=0;
}
int main()
{
    construct c1;
    construct c2(2);
    construct c3(4,5);
    // construct c4(c2);
    construct c4 = sum(c3,c1);
    
    cout << "c1 is "<<endl; display(c1);
    cout << "c2 is "<<endl; display(c2);
    cout << "c3 is "<<endl; display(c3);
    cout << "c4 is "<<endl; display(c4);
    construct a1,a2,a3,a4;
    a1=construct(3);
    a2=construct(40,50);
    a3=sum(a1,a2);
    cout << "a1 is "<<endl; display(a1);
    cout << "a2 is "<<endl; display(a2);
    cout << "a3 is "<<endl; display(a3);
    cout << "a4 is "<<endl; display(a4); //implicit initilzation
}