#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int *ptr= new int[10];
    for(int i=0;i<10;i++)
    {
        ptr[i]=i;
    }
    for(int i=0;i<10;i++)
    {
        cout << setw(10) << ptr[i] << endl;
        cout << setw(11) << "---" << endl;
    }
}