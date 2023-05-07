#include<iostream>
using namespace std;
void create(int *&p,int m)
{
    p = new int[m];
    for(int i=0;i<m;i++)
    {
        p[i]=i+1;
    }
}
int main()
{
    int *ptr;
    int m;
    cout << "Enter the size of array : ";
    cin >> m;
    create(ptr,m);
    cout << "After Creating dynamic array :" << endl;
    for(int i=0;i<m;i++)
    {
        cout << "ptr["<<i<<"] value is : " << ptr[i] << endl;
    }
}