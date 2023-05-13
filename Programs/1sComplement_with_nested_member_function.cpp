#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    system("cls");
    int *ptr;
    int a = 29;
    ptr[0] = a;
    cout << "Value by pointer is " << ptr[0] << endl;
}