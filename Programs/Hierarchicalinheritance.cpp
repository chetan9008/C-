#include <iostream>
#include <string>
#include <string.h>
using namespace std;
class student
{
protected:
    char name[20];
    int roll;

public:
    void putdetails(char n[20], int r)
    {
        strcpy(name, n);
        roll = r;
    }
    void display()
    {
        cout << "Name is : " << name << endl;
        cout << "Rollno is : " << roll << endl;
    }
};
class arts : public student
{
    int subjects;

public:
    void nosubjects(int s)
    {
        subjects = s;
    }
    void display()
    {
        cout << "No of subjects in arts is :" << subjects << endl;
    }
};
class engineering : public student
{
    int subjects;

public:
    void nosubjects(int s)
    {
        subjects = s;
    }
    void display()
    {
        cout << "No of subjects in Engneering is :" << subjects << endl;
    }
};
class medical : public student
{
    int subjects;

public:
    void nosubjects(int s)
    {
        subjects = s;
    }
    void display()
    {
        cout << "No of subjects in Medical is :" << subjects << endl;
    }
};
int main()
{
    char temp[20] = "nigam";
    char temp2[20] = "anurag";
    arts st;
    st.putdetails(temp,12);
    st.nosubjects(4);
    st.student::display();
    st.display();
    engineering str;
    str.putdetails(temp2,2);
    str.nosubjects(6);
    str.student::display();
    str.display();
}