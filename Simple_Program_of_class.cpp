#include<iostream>
#include<string.h>
using namespace std;
class student
{
    int roll_no;
    char name[10];
    public:
    void getdata();
    void display();
};
 void student:: getdata()
    {
        cout << "Enter the roll no : ";
        cin >> roll_no;
        cout << "Enter the name : ";
        cin >> name;
    }
    void student:: display()
    {
        cout << "Name is : " << name << endl;
        cout << "Roll No is : " << roll_no;
    }
int main()
{
    student s;
    s.getdata();
    s.display();
}