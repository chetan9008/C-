#include <iostream>
#include <string.h>
using namespace std;
class staff
{
protected:
    int code;
    char name[20];

public:
    staff(int c, char n[20])
    {
        code = c;
        strcpy(name, n);
    }
};
class teacher : public staff
{
    char subject[20];
    char publication[20];

public:
    teacher(int c, char n[20], char s[20], char p[20]) : staff(c, n)
    {
        strcpy(subject, s);
        strcpy(publication, p);
    }
    void display();
};
void teacher ::display()
{
    cout << "Name is : " << name << endl;
    cout << "Code is : " << code << endl;
    cout << "Subject is : " << subject << endl;
    cout << "Publication is : " << publication << endl;
}
class officer : public staff
{
    int grade;

public:
    officer(int g, int c, char n[20]) : staff(c, n)
    {
        grade = g;
    }
    void display();
};
void officer ::display()
{
    cout << "Name is : " << name << endl;
    cout << "Code is : " << code << endl;
    cout << "Grade is : " << grade << " st" << endl;
}
class typist : public staff
{
protected:
    int speed;

public:
    typist(int s, int c, char n[20]) : staff(c, n)
    {
        speed = s;
    }
};
class regular : public typist
{

public:
    regular(int s, int c, char n[20]) : typist(s, c, n)
    {
    }
    void display();
};
void regular ::display()
{
    cout << "Name is : " << name << endl;
    cout << "Code is : " << code << endl;
    cout << "speed is : " << speed << " wpm" << endl;
}
class casual : public typist
{
    int wages;

public:
    casual(int w, int s, int c, char n[20]) : typist(s, c, n)
    {
        wages = w;
    }
    void display();
};
void casual ::display()
{
    cout << "Name is : " << name << endl;
    cout << "Code is : " << code << endl;
    cout << "speed is : " << speed << " wpm" << endl;
    cout << "Your wage is : "<< wages<< "Rs per day"<< endl;
}
int main()
{
    char name[20] = "chetan";
    officer chetan(1, 12, name);
    chetan.display();

    strcpy(name, "yashvant");
    char subject[20] = "C language";
    char pub[20] = "bpb publication";
    teacher yash(10, name, subject, pub);
    yash.display();

    strcpy(name, "gaurav");
    regular g(45, 25, name);
    g.display();

    strcpy(name,"surabh");
    casual s(500,50,12,name);
    s.display();
}