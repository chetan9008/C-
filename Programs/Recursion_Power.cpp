#include<iostream>
#include<math.h>
using namespace std;
int power(int x,int n)
{
    if(x==0)
    return 1;
    else
    return n*power(x-1,n);
}
int main()
{
    int n,number;
    cout << "Enter the number : ";
    cin >> number;
    cout << "Enter the power : ";
    cin >> n;
    cout << "Power of " << number<< "^" << n  << " is : " << power(n,number);
}