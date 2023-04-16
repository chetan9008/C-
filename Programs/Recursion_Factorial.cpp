#include<iostream>
using namespace std;
long factorial(int x)
{
    if(x==0)
    return 1;
    else
    return x*(factorial(x-1));
}
int main()
{
    int number;
    cout << "Enter the number : " ;
    cin >> number;
    cout << "Factorial of " << number << " is : " << factorial(number) << endl;
}