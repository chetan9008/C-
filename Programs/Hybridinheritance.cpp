#include<string.h>
#include<iostream>
using namespace std;
class student
{
    protected:
    char name[10];
    int rollno;
    public:
    void getdata(char n[10],int r)
    {
        strcpy(name ,n );
        rollno = r;
    }
};
class test : public student
{
    protected:
    int sub1,sub2;
    public:
    void getmarks(int x,int y)
    {
        sub1 = x;
        sub2 = y;
    }
};
class sports
{
    protected:
    bool check;
    public:
    void review(bool x)
    {
        check = x;
    }
};
class result : public test,public sports
{
    int sum;
    public:
    void final()
    {
        sum = sub1 + sub2;
    }
    void display()
    {
        cout << "Name of student is : "<<name<<endl;
        cout << "Roll no of student is : "<< rollno << endl;
        cout << "Marks in first subject is : "<<sub1<<endl;
        cout << "Marks in second subject is : "<<sub2<<endl;
        if(check == true)
        cout << name << " is a sports person"<<endl;
        else
        cout << name << " is not a sports person"<< endl;
        cout << "Result is : 20/"<<sum<<endl;
    }
};
int main()
{
    char temp[20] = "chetan";
    result st;
    st.getdata(temp,5);
    st.getmarks(9,10);
    st.review(false);
    st.final();
    st.display();
}