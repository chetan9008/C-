#include<iostream>
using namespace std;
int line(const char ch=3, int len = 30);
int main()
{
    line();
    line(2);
    line(4,40);
}
int line(const char ch, int len)
{
    for(int i=0;i<len;i++)
        cout << ch;
        cout << endl;        
}