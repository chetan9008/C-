#include<iostream>
using namespace std;
int main()
{
    char ch = 'C';
    cout << ch << endl;
    cout << int(ch) << endl;
    cout << static_cast<int> (ch) << endl;
    float num = 10.23;
    cout << num << endl;
    cout << (int) num << endl;
    cout << static_cast<int> (num) << endl;
    return 0;
}