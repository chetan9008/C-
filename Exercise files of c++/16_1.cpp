#include<iostream>
using namespace std;
int main()
{
    int data = 4;
    int *ptr = &data;
    char *ch = reinterpret_cast<char*>(ptr);
    cout << *ch << endl;
    return 0;
}