#include<iostream>
using namespace std;
class student
{
    protected:
    int roll;
    public:
    student(int r)
    {
        roll = r;
    }
    virtual void display() = 0;
};
class test: public student
{
    int sub1, sub2;
    public:
    test(int i,int j,int k):student(i)
    {
        sub1 = j;
        sub2 = k;
    }
    void display()
    {
        cout << "Roll no is : "<< roll<< endl;
        cout << "Marks in 1st subject is : " << sub1<< endl;
        cout << "Marks in 2nd subject is : " << sub2<< endl;
    }

};
int main()
{
    test t(12,9,10);
    t.display();
}