#include<iostream>
using namespace std;
class a 
{
    public:
    int bc;
};
class b : a
{
    public:
    void display()
    {
        bc = 4;
        cout << bc << endl;
    }
};
int main()
{
    b c;
    c.display();
}