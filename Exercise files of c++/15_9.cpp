#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s("123456789");
    for(size_t i=0;i<=8;i++)
    {
        for(size_t k=8;k>i;k--)
        {
            cout << " " ;
        }
        for(size_t j=0;j<=i;j++)
        {
            cout << s.at(i) << " ";
        }
        cout << endl;
    }
    return 0;
}