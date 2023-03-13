#include<iostream>
using namespace std;
void create(int *&p,int m)
{
    p = new int[m];
    for(int i=0;i<10;i++)
    {
        p[i]=i;
        cout <<"value is " << p[i] << endl;
    }
}
int main()
{
    int *ptr;
    int m= 5;
    create(ptr,m);
    for(int i=0;i<10;i++)
    {
        cout << "Now value is : " << ptr[i] << endl;
    }
}