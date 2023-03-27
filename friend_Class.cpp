#include<iostream>
using namespace std;
class first 
{
    int data=10;
    friend class second;
};
class second
{   
    public:
    void display(first fir)
    {
        cout << "Value of first data member is : " << fir.data;
    }
};
int main()
{
    first f;
    second s;
    s.display(f);
}