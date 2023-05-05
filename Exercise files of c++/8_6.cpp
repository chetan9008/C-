#include<iostream>
#include<string.h>
using namespace std;
class staff
{
    int code;
    char name[20];
    public:
    staff(int c,char n[20])
    {
        code = c;
        strcpy(name,n);
    }
    void display()
    {
        cout << "name is " << name<< endl;
        cout << "code is " << code << endl;
    }
};
class teacher
{
    staff s;
    char subject[20];
    char publication[20];
    public:
    teacher(int c,char n[20],char sub[20],char p[20]):s(c,n)
    {
        strcpy(subject,sub);
        strcpy(publication,p);
    }
    void display()
    {
    cout << endl << "Teacher details" << endl;
        s.display();
        cout << "subject is " << subject << endl;
        cout << "publication is " << publication<< endl;
    }
};
class officer
{
    staff s;
    int grade;
    public:
    officer(int g,int c,char n[20]):s(c,n)
    {
        grade = g;
    }
    void display();
};
void officer :: display()
{
    cout << endl << "Officer details" << endl;
    s.display();
    cout << "Grade is " << grade << "st "<< endl;
}
class typist 
{
    staff s;
    int speed;
    public:
    typist(int s,int c,char n[20]):s(c,n)
    {
        speed  = s;
    }
    void display()
    {
        s.display();
        cout << "Speed is " << speed << " wpm " << endl;
    }
};
class regular
{
    typist t;
    public:
    regular(int s,int c,char n[20]):t(s,c,n)
    {
        cout << "We find Regular typist" << endl;   
    }
    void display()
    {
    cout << endl << "Regular Typist details" << endl;
        t.display();
    }
};
class casual
{
    typist t;
    int wages;
    public:
    casual(int w,int s,int c,char n[20]):t(s,c,n),wages(w)
    {}
    void display()
    {
        cout << endl << "Casual Typist details " << endl;
        t.display();
        cout << "Daily wages is " << wages << " Rs" << endl;
    }
};
int main()
{
    teacher t(20,"chetan","c++","BPB");
    t.display(); 
    officer o(1,22,"gaurav");
    o.display();
    regular r(50,44,"chetan");
    r.display(); 
    casual c(600,40,33,"surabh");
    c.display();
}