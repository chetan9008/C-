#include<iostream>
using namespace std;
inline void largest(int x,int y,int z)
{
    if(x>y)
    {
        if(x>z)
        {
            cout << x <<" is greater";
        }
        else
        {
            cout << z << " is greater";
        }
    }
    else
    {
        if(y>z)
        {
            cout << y << " is greater";
        }
        else
        {
            cout << z << " is greater";
        }
    }
}
int main()
{
    largest(1,29,3);
}