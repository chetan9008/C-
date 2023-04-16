#include<iostream>
using namespace std;
class item
{
    int data;
    public:
    item()
    {
        data = 5;
    } 
    void display()
    {
        cout << this->data;
    }
};
int main()
{   
    item i;
    i.display();
}