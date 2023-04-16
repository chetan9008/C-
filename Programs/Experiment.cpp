#include <iostream>
#include <string.h>
using namespace std;
class sum
{
    int a,b;
    public:
    sum()
    {

    }
    sum(int n)
    {
        a=n;b=n;
    }
    sum(const sum &s)
    {
        a = s.a;
        b = s.b;
    }
    void display()
    {
        cout << a<<"\t"<<b;
        if(1<2)
        cout << "chetan"<<endl;
        cout << ((444-164)/5)<<endl;
    }
};
int main()
{
    // sum s1 = sum(4);
    // sum s2(5);
    // sum s3 = 6;
    // s1.display();
    sum s1= sum(4);
    sum s2 = sum(s1);
    s2.display();
}