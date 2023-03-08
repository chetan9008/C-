

// One way to class

#include<iostream>
using namespace std;
class person{
    public:
    char ch[10];
    int rollno;
    void insert(void );
    void display(void );
};
void person :: insert(void)
{
    cout << "Enter the name:";
    cin >> ch;
    cout << "Enter the Roll no";
    cin >> rollno;
}
void person :: display(void)
{
    cout << "Name:" << ch << "\n" << "Roll No:" << rollno;
}
int main()
{
    person p;
    p.insert();
    p.display();
    return 0;
}


