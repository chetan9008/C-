#include<iostream>
using namespace std;
void add(int x,int y)
{
    cout << "addition of two number is " << x+y << endl;
}
int main()
{
    auto i = 22;


    if(i%2 == 0)
    {
        cout << "i is even" << endl;
    }

    // auto keyword makes flexiblity 
    void(*fptr)(int,int) = add; //this is same as below
    // auto fptr = add;
    fptr(2,3);
    return 0;
}