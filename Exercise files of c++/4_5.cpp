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
    int first,second,third;
    cout << "Enter the first element : " ;
    cin >> first;
    cout << "Enter the second element : ";
    cin >> second;
    cout << "Enter the first element : " ;
    cin >> third;
    largest(first,second,third);
}