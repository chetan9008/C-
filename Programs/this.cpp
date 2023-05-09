#include <string.h>
#include <iostream>
using namespace std;
class elder
{
    char *ch;
    int age;

public:
    elder()
    {
    }
    elder(char *str, int a)
    {
        ch = new char[20];
        strcpy(ch, str);
        age = a;
    }
    elder greater(elder e)
    {
        if (age > e.age)
        {
            return *this;
        }
        else
            return e;
    }
    void display()
    {
        cout << "Name is : " << ch << endl;
        cout << "Age is :  " << age << endl;
    }
};
int main()
{
    char first[20] = "chetan ", first1[20] = "gaurav", first2[20] = "aman";
    elder p1(first, 20);
    elder p2(first1, 17);
    elder p3(first2, 21);
    cout << "Elder is" << endl;
    elder p = p3.greater(p1);
    p.display();
}