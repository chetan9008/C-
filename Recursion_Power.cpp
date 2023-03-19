#include<iostream>
using namespace std;
int power(int x)
{
    if(x==0)
    return 1;
    else
    return 2*power(x-1);
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Power of 2^" << n  << " is : " << power(n);
}