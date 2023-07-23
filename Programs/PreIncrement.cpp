#include<iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = 2;
    int pre_inc = ++a;
    int post_inc = b++;
    cout << "Pre Increment is " << pre_inc << endl;
    cout << "Post Increment is " << post_inc << endl;
    return 0;
}