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
class education
{
    protected:
    int per_in_hi;
    int per_in_in;
    public:
    education(int f,int s)
    {
        per_in_hi = f;
        per_in_in = s;
    }
};
class teacher : public staff , public education
{
    char subject[20];
    char publication[20];

public:
    teacher(int c, char n[20], char s[20], char p[20],int f,int se) : staff(c, n),education(f,se)
    {
        strcpy(subject, s);
        strcpy(publication, p);
    }
    void display();
};
void teacher ::display()
{
    cout <<endl<<"Teacher Details" <<endl;
    cout << "Name is : " << name << endl;
    cout << "Code is : " << code << endl;
    cout << "Subject is : " << subject << endl;
    cout << "Publication is : " << publication << endl;
    cout << "Marks in 10th is : "<< per_in_hi << "%"<< endl;
    cout << "Marks in +2 is : "<< per_in_in << "%"<< endl;
}
class officer : public staff , public education
{
    int grade;

public:
    officer(int g, int c, char n[20],int h,int se) : staff(c, n) , education(h,se)
    {
        grade = g;
    }
    void display();
};
void officer ::display()
{
    cout <<endl<<"Officer Details" <<endl;
    cout << "Name is : " << name << endl;
    cout << "Code is : " << code << endl;
    cout << "Grade is : " << grade << " st" << endl;
    cout << "Marks in 10th is : "<< per_in_hi << "%"<< endl;
    cout << "Marks in +2 is : "<< per_in_in << "%"<< endl;
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
    cout <<endl<<"Regular Typist Details" <<endl;
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
    cout <<endl<<"Casual Typist Details" <<endl;
    cout << "Name is : " << name << endl;
    cout << "Code is : " << code << endl;
    cout << "speed is : " << speed << " wpm" << endl;
    cout << "Your wage is : "<< wages<< "Rs per day"<< endl;
}
int main()
{
    char name[20] = "chetan";
    officer chetan(1, 12, name,88,99);
    chetan.display();

    strcpy(name, "yashvant");
    char subject[20] = "C language";
    char pub[20] = "bpb publication";
    teacher yash(10, name, subject, pub,80,90);
    yash.display();

    strcpy(name, "gaurav");
    regular g(45, 25, name);
    g.display();

    strcpy(name,"surabh");
    casual s(500,50,12,name);
    s.display();
}