#include<iostream>
using namespace std;
struct student
{
    char name[10];
    int roll_no;
    int marks;
    float percantage;
};
int main()
{
    struct student s;
    cout << "Enter the name : ";
    cin >> s.name;
    cout << "Enter the roll no :";
    cin >> s.roll_no;
    cout << "Enter the marks :";
    cin >> s.marks;
    s.percantage = (s.marks/500.0)*100.0;
    cout << endl << endl;
    cout << "Name : " << s.name << endl;
    cout << "Roll No : " << s.roll_no << endl;
    cout << "Marks : " << s.marks<< endl;
    cout << "Percantage : " << s.percantage<< endl;
    return 0;
}