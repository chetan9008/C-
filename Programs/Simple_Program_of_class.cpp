#include<iostream>
#include<string.h>
using namespace std;
class student
{
    char name[30];
    int rollNo;
    public:
    void getdata(char n[30],int r);
    void print()
    {
        cout << "Name : " <<name<< endl;
        cout << "Roll no : " <<rollNo<< endl;
    }
};
void student :: getdata(char n[30],int r)
{
        strcpy(name,n);
        rollNo = r;
}
int main()
{
    char ch[30] = "chetan";
    char ch1[30] = "gourav";
    student s1,s2;
    cout << ch<< "'s details :" << endl;
    s1.getdata(ch,20);
    s1.print();
    cout <<  ch1<< "'s details :" << endl;
    s2.getdata(ch1,10);
    s2.print();
    return 0;
}