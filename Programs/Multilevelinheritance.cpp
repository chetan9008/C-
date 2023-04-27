#include <iostream>
using namespace std;
class base
{
private:
    int roll;
public:
    void putdata(int);
    int giveroll() { return (roll); }
    void displayroll();
};
void base ::putdata(int ro)
{
    roll = ro;
}
void base ::displayroll()
{
    cout << "Roll no is : " << roll << endl;
}
class intermediate : public base
{
private:
    int co;
    int cpp;

public:
    void putmarks(int x, int y);
    int comarks() { return (co); }
    int cppmarks() { return (cpp); }
    void displaymarks();
};
void intermediate ::putmarks(int x, int y)
{
    co = x;
    cpp = y;
}
void intermediate ::displaymarks()
{
    cout << "Computer organization marks is : " << co << "/10" << endl;
    cout << "C++ Marks is : " << cpp << "/10" << endl;
}
class derived : public intermediate
{
    int sum;

public:
    void result();
    void display();
};
void derived ::result()
{
    sum = comarks() + cppmarks();
}
void derived ::display()
{
    displayroll();
    displaymarks();
    cout << "Sum of marks is " << sum << "/20" << endl;
}
int main()
{
    derived student;
    student.putdata(12);
    student.putmarks(9, 10);
    student.result();
    student.display();
    return 0;
}