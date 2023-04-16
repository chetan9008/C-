#include<iostream>
using namespace std;
void recursion(int f,int s,int n)
{
    if(n==20)
    return;
    long int result = f + s;
    cout << result<< endl;

    recursion(s,f+s,n+1);
}
int main()
{
    int first=0,second=1;
    recursion(first,second,0);
    return 0;
}