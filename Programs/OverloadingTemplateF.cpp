#include<iostream>
using namespace std;
template<class var>
void display(var x)
{
    cout << "Template function : " << x << endl;
}
template<class var1,class var2>
void display(var1 x,var2 y)
{
    cout << "Template function : " << endl;
    cout << "x : " << x << endl;
    cout << "y : " << y << endl;
}
void display(int x)
{
    cout << "Normal function : " << x << endl;
}
int main()
{
    display(200);
    display(200.2);
    display(300);
    display(200,200.2);
    display('c');
    display("chetan");
    return 0;
}