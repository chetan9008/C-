#include<iostream>
using namespace std;
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        a[i] = i+1;
    }
    int *ptr = a;
    for(int i=0;i<10;i++)
    {
    cout << *(int *)ptr << endl;
    (int *)ptr++;
    }
    cout << (*ptr = *ptr - 5)<<endl;
}   