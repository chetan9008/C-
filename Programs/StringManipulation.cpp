#include<iostream>
#include<string.h>
using namespace std;
class carray
{
    char *str;
    int len;
    public:
    carray(){len=0;str=0;}
    carray(char *string)
    {
        len = strlen(string);
        str = new char[len+1];
        strcpy(str,string);
    }
    carray(const carray &string)
    {
        len = string.len;
        str = new char[len+1];
        strcpy(str,string.str);
    }
    carray operator+(carray d)
    {
        carray temp;
        temp.len = len + d.len;
        temp.str = new char[temp.len+1];
        strcpy(temp.str,str);
        strcat(temp.str,d.str);
        return temp;
    }
    bool operator < (carray d)
    {
        int first = len;
        int second = d.len;
        if(first < second)
        return true;
        else
        return false;
    }
    bool operator == (carray d)
    {
        int first = len;
        int second = d.len;
        if(strcmp(str,d.str)==0)
        return true;
        else
        return false;
    }
    friend ostream & operator << (ostream &print,carray c)
    {
            print << c.str;
            return(print);
    }
};
int main()
{
    carray s1 = "chetan";
    cout << "First string is :";
    cout << s1<<endl;
    carray s2 = "Kumar";
    carray c = "Kumar";
    cout << "Second string is :";
    cout << c<<endl;
    // carray s3 = s1;
    // cout << s3<<endl;
    carray s4 = s1 + s2;
    cout << "Concatenated string is :";
    cout << s4<<endl;
    if(s1<s2)
    {
        cout <<s1 << " is smaller than "<< s2<<endl;
    }
    else
    {
        cout <<s2 << " is smaller than "<< s1<<endl;
    }
    if(s1==c)
    {
        cout <<s1 << " is equal to" << c<<endl;
    }
    else
    {
        cout << s1 << " is not equal to "<<c <<endl;
    }
}