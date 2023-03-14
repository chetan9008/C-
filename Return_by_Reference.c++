#include <iostream>
using namespace std;
// int num;
// int &test()
// {
//     return num; // it returns the address
// }
// int main()
// {
//     test() = 4;
//     cout << "Number value is " << num;
// }

int &test(int &x,int &y)
{
    if(x>y)
    return x;
    else
    return y;
}
int main()
{
    int a,b;
    b=5;a=2;
    test(a,b)=-1;
    if(a==-1)
    cout << "a is largest no.";
    else
    cout << "b is largest no.";
}