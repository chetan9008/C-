#include<iostream>
#include<string>
#include<string.h>
using namespace std;
class str
{
    char s[30];
    public:
    str()
    {
        strcpy(s,"");
    }
    str(str &sring)
    {
        char ch1[20];
        cout << "Enter the sting : ";
        cin >> ch1;
        strcpy(s,sring.s);
        strcat(s,ch1);
    }
    str(char str[10])
    {
        strcpy(s,str);
    }
    void display()
    {
        cout << "Concatenated String is : " << endl;
        cout << s<<endl;
    }
    void cat(char b[10])
    {
        strcat(s,b);
    }
};

int main()
{
    char ch[20]= "hello";
    str c1;
    str c2(ch);
    str c3;
    c3 = c2;
    c3 = str(c2);
    // c1.display();
    // c2.display();
    c3.display();
}