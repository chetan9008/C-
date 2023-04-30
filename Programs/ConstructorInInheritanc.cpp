#include <iostream>
#include <string.h>
using namespace std;
class student
{
protected:
    char name[20];
    int roll;

public:
    void putdata(char n[20], int r);
};
void student ::putdata(char n[20], int r)
{
    strcpy(name, n);
    roll = r;
}
class test : virtual public student
{
protected:
    int sub1;
    int sub2;

public:
    test(int x, int y)
    {
        sub1 = x;
        sub2 = y;
    }
};
class sports : virtual public student
{
protected:
    int score;

public:
    sports(int s)
    {
        if (roll < 10)
        {
            score = s;
        }
        else
        {
            score = 0;
        }
    }
};

class result : public test, public sports
{
    int sum;
    float per;

public:
    result(int x, int y, int s) : test(x, y), sports(s)
    {
        sum = sub1 + sub2 + score;
        per = (sum / 30.0) * 100.0;
    }
    void display();
};
void result ::display()
{
    cout << "Student Details is : " << endl;
    cout << "Name is :" << name << endl;
    cout << "Roll no is : " << roll << endl;
    cout << "Marks in 1st subject is :" << sub1 << endl;
    cout << "Marks in 2nd subject is :" << sub2 << endl;
    cout << "Result is : 30/" << sum << endl;
    cout << "Percantage is : " << per << endl;
}
int main()
{
    char temp[20] = "chetan";
    result s1(9,10,6);
    s1.putdata(temp,5);
    s1.display();
}