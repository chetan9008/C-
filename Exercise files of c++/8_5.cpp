#include<iostream>
#include<string.h>
using namespace std;
class person 
{
    protected:
    char name[20];
    int code;
    public:
    void putdata(char n[20],int c)
    {
        strcpy(name,n);
        code = c;
    }
};
class account: virtual public person{
    protected:
    int pay;
    public:
    account(int p)
    {
        pay = p;
    }
};  
class admin : virtual public person{
    protected:
    int experience;
    public:
    admin(int e)
    {
        experience = e;
    }   
};
class master: public account,public admin
{
    public:
    master(int p,int e,char n[20],int c):admin(e),account(p)
    {
        putdata(n,c);
        cout << "Account is created" << endl;
    }
    void display();
};
void master :: display()
{
    cout << "Name is : " << name<< endl;
    cout << "Code is : " << code << endl;
    cout << "Salary is : " << pay << "Rs/month " << endl;
    cout << "Experience is : " << experience << " Years "<< endl;
}
int main()
{
    char temp[20] = "chetan";
    master m(20000,3,temp,20);
    m.display();
}