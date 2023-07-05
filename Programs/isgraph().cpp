#include<iostream>
using namespace std;
int main()
{
    char ch = 'c';
    if(isgraph(ch))
    {
        cout << "not space" << endl;
    }
    else
    {
        cout << "space" << endl;
    }
    return 0;
}