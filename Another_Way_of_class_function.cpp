#include<iostream>
using namespace std;
class student{
    public:
    char name[10];
    int roll;
    void insert()
    {
        cout << "Enter the Name:";
        cin >> name;
        cout << "Enter the roll No. :";
        cin >> roll;
    }
    void display()
    {
        cout << "Name is :" << name << "\nRoll No is :" << roll;
    }
};
int main()
{
    student p;
    p.insert();
    p.display();

}