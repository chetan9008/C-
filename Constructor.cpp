#include<iostream>
using namespace std;
class item
{
    int data;
    public:
    // item();
    item() //inline constructor
    {
        data=5;
    }
    void display()
    {
        cout << data<<endl;
    }
};
// item :: item ()//default constructor
// {
//     cout << "Enter the no : ";
//     cin >> data;
// }
int main()
{
    item i;
    i.display();
}