#include<iostream>
using namespace std;
void swap (int &f,int &s)
{
    int t;
    t = f;
    f = s;
    s = t;
}
int main()
{
    int first,second;
    cout << "Enter the first and second number:" << endl;
    cin >> first >> second;
    swap(first,second);
    cout << "After swapping:"<< endl;
    cout << first << endl << second;
}