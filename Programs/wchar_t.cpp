#include<iostream>

using namespace std;
int main()
{
    wchar_t ch = L'c';
    char ch1 = 'c';
    cout << sizeof(ch) << endl;
    cout << sizeof(ch1) << endl;
    return 0;
}