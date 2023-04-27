#include<iostream>
using namespace std;
class student
{
    protected:
    int roll;
    public:
    void putroll(int roll);
    void display();
};
void student :: display()
{
    cout << "Student class " << endl;
}
class test
{
    protected:
    int s1,s2;
    public:
    void putmarks(int x,int y);
    void display();
};
void test :: display()
{
    cout << "Test class " << endl;
}
void student :: putroll(int r)
{
    roll = r;
}
void test :: putmarks(int x,int y)
{
    s1 = x;
    s2 = y;
}   
class derived:public student,public test
{
    int sum;
    public:
    void result();
    void display();
};
void derived :: display()
{
    test :: display();
}
void derived :: result()
{
    sum = s1 + s2;
}
// void derived :: display()
// {
//     cout << "Roll no is :" << roll<<endl;
//     cout << "Subject 1 marks is :"<< s1 << endl;
//     cout << "Subject 2 marks is :"<< s2 << endl;
//     cout << "Resul is : " << sum<<endl;
// }
int main()
{
    derived s;
    s.putroll(12);
    s.putmarks(9,10);
    s.result();
    s.display();
}