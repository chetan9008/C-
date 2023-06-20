#include<functional>
#include<algorithm>
#include<iostream>
using namespace std;
class factorial
{
    public:
    int operator()(int a)
    {
        int fact=1;
        for(int i=2;i<=a;i++)
        {
            fact *= i;
        }
        return fact;
    }
};
int main()
{
    factorial c;
    cout << "Factorial of number is " << c(7) << endl;
    return 0;
}