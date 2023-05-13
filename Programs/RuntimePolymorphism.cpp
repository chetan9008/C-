#include <iostream>
#include <string.h>
using namespace std;
class media
{
protected:
    char *title;
    float *price;

public:
    media(char *t, float p)
    {
        title = new char[30];
        price = new float;
        strcpy(title, t);
        *price = p;
    }
    virtual void display() {}
};
class book : public media
{
    int pages;

public:
    book(char *t, float p, int pa) : pages(pa), media(t, p)
    {
    }
    void display()
    {
        cout << "Title is : " << title << endl;
        cout << "Price is : " << *price << "Rs " << endl;
        cout << "No of page are : " << pages << endl;
    }
};
class tape : public media
{
    int time;

public:
    tape(char *t, float p, int ti) : time(ti), media(t, p)
    {}
    void display()
    {
        cout << "Title is : " << title << endl;
        cout << "Price is : " << *price << "Rs " << endl;
        cout << "Length is : " << time <<" hours " << endl;
    }
};
int main()
{
    char title[20];
    int time, pages;
    float price;
    cout << "Enter the Book details : " << endl;
    cout << "Enter title : ";
    gets(title);
    cout << "Enter the price : ";
    cin >> price;
    cout << "No of pages : ";
    cin >> pages;
    book b(title,price,pages);
    cout << "Enter the Tape details : " << endl;
    fflush(stdin);
    cout << "Enter title : ";
    gets(title);
    cout << "Enter the price : ";
    cin >> price;
    cout << "time is  : ";
    cin >> time;
    tape t(title,price,time);

    media *ptr[2];
    ptr[0] = &b;
    ptr[1] = &t;
    cout << "BOOK DETAILS"<< endl;
    ptr[0]->display();
    cout << "TAPE DETAILS"<< endl;
    ptr[1]->display();
    return 0;
}