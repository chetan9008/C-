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
    void display()
    {
        cout << a<<"\t"<<b;
    }
};
int main()
{
    sum s1 = sum(4);
    sum s2(5);
    sum s3 = 6;
    s1.display();
}