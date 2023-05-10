#include <string.h>
#include <iostream>
using namespace std;
class AOC
{
    char ch[20];

public:
    AOC()
    {
    }
    AOC(char *c)
    {
        strcpy(ch, c);
    }
    friend ostream &operator<<(ostream &print, AOC str)
    {
        print << str.ch << endl;
        return (print);
    }
    bool operator ==(AOC string)
    {
        if(strcmp(ch,string.ch)==0)
        {
            return true;
        }
        else
        return false;
    }
};
int main()
{
    char string[20];
    strcpy(string, "chetan");
        char string1[20];
    strcpy(string1, "chetan1");
    AOC str;
    str = string;
    AOC str1;
    str1 = string1;
    cout << "First string is : " << str;
    cout << "Second string is : " << str1;
    if(str == str1)
    printf("string is identical");
    else
    cout << "string is not identical";
}