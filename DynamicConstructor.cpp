#include <iostream>
#include <string.h>
using namespace std;
class str
{
    char *ch;
    int length;

public:
    str()
    {
        length = 0;
        ch = new char[length + 1];
    }
    str(char *s)
    {
        int length = strlen(s);
        ch = new char[length + 1];
        strcpy(ch, s);
    }
    void display()
    {
        cout << ch << endl;
    }
    str(int s)
    {
        ch = new char[s + 1];
        cout << "Enter the string : ";
        cin >> ch;
    }
    friend str combine(str &a,str &b);
};
str combine(str &a,str &b)
{
    int length = a.length + b.length;
    str c;
    c.ch = new char[length+1];
    strcpy(c.ch,a.ch);
    strcat(c.ch,b.ch);
    return c;
}
int main()
{
    str s1("chetan");
    str s2("kumar");
    s1.display();
    s2.display();
    str s3 = combine(s1,s2);
    s3.display();
    str s4(10);
    s4.display();
}