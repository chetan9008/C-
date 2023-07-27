// this cast use for convert 
// constant pointer to normal 
// pointer 
#include <iostream>
using namespace std;
int change(int *ptr)
{
    *ptr = 10;
    cout << 10 + *ptr;
}
int main()
{
    const int a = 2;
    const int *ptr = &a;
    // int *p = const_cast<int*>(ptr);
    // *p = 22;
    // cout << *p << endl;
    // cout << *ptr << endl;
    // cout <<  a << endl;

    change(const_cast<int *>(ptr));
}