#include<iostream>
#include<string.h>
using namespace std;
class binary
{
    string s;
    void check()
    {
        for(int i=0;i<s.length();i++)
        {
            if((s.at(i)!= '0' )&&(s.at(i)!='1'))
            {
                cout << "You entered wrong binary no :" << s;
                cout <<endl << "Please Enter the correct no!";
                exit(0);
                return;
            }
        }
    }
    void convert()
    {
        check();
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)=='0')
            {
                s.at(i) = '1';
            }
            else
            s.at(i) = '0';
        }
    } 
    public:  
    void get()
    {
        cout << "Enter the binary No : ";
        cin >> s;
    }
    void display()
    {
        convert();
        cout << s;
    }
};
int main()
{
    binary first;
    first.get();
    first.display();
    return 0;
}
