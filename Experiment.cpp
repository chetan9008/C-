#include<iostream>
using namespace std;
class sum 
{
    public:
    int a=2,b=3,sum;
    int total();
    void print();
};      
int  sum ::  total()
{
    sum = a+b;
}
void sum :: print()
{
    cout << sum;
}
int main()
{
    sum v1;
    v1.total();
    v1.print();
    return 0;
}