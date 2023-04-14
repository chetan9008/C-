#include <iostream>
#include <string.h>
using namespace std;
class books
{
    char **author;
    char **title;
    float *price;
    char **publisher;
    int *stock;
    void enter(int i)
    {
        int n;
        cout << "Please Enter the no of books :";
        cin >>  n;
        if(n>stock[i])
        {
            cout << "Sorry Required copies not is stock!"<<endl;
        }
        else
        {
            cout << "Price is :"<< (n*price[i]);
        }
    }
    void display(int i)
    {
        cout << "Author is :"<<author[i]<<endl;
        cout << "Title is :"<<title[i]<<endl;
        cout << "Price is :"<<price[i]<<endl;
        cout << "Publisher is :"<<publisher[i]<<endl;
        cout << "Stock is :"<<stock[i]<<endl;
        enter(i);
    }
public:
    books()
    {
        author = new char*[10];
        for(int i=0;i<10;i++)
        {
            author[i] = new char[100];
        }

        title = new char*[10];
        for(int i=0;i<10;i++)
        {
            title[i] = new char[100];
        }

        publisher = new char*[10];
        for(int i=0;i<10;i++)
        {
            publisher[i] = new char[100];
        }

        price = new float[10];
        stock = new int[10];
    }
    void initilize()
    {
        strcpy(author[0], "yashvant kanetkar");
        strcpy(author[1], "rob percival");
        strcpy(author[2], "balaguruswamy");
        strcpy(author[3], "r d sharma");
        strcpy(author[4], "yashvant kanetkar");
        strcpy(author[5], "shrivastav");
        strcpy(author[6], "babli");
        strcpy(author[7], "yashvant kanetkar");
        strcpy(author[8], "tim");
        strcpy(author[9], "tylor");

        strcpy(title[0], "Let us c");
        strcpy(title[1], "how to make 10000 dollar from code");
        strcpy(title[2], "OOPs in c++");
        strcpy(title[3], "NCERT");
        strcpy(title[4], "Let us c++");
        strcpy(title[5], "pathan");
        strcpy(title[6], "chor ki basti");
        strcpy(title[7], "DS in c");
        strcpy(title[8], "github explain");
        strcpy(title[9], "wednesday");

        for (int i = 0; i < 10; i++)
        {
            strcpy(publisher[i], "Winston (US)");
        }

        for (int i = 0; i < 10; i++)
        {
            price[i] = rand();
            if ((price[i] > 1000))
            {
                price[i] /= 100;
            }
            if ((price[i] < 100))
            {
                price[i] += 100;
            }
        }

        for (int i = 0; i < 10; i++)
        {
            stock[i] = rand();
            if ((stock[i] > 1000))
            {
                stock[i] /= 100;
            }
            if ((stock[i] < 100))
            {
                stock[i] += 100;
            }
        }
    }
    void input()
    {
        char t[50],t1[50];
        cout << "Enter the Title of Book :";
        gets(t);
        cout << "Enter the Author of Book:";
        gets(t1);
        for(int i=0;i<10;i++)
        {
            if(strcmp(t,title[i])==0)
            {
                display(i);
                return;
            }
        }
        for(int i=0;i<10;i++)
        {
            if(strcmp(t1,author[i])==0)
            {
                display(i);
                return;
            }
        }
        cout << "Please Enter the Correct name!"<<endl;
    }
};
int main()
{
    books b;
    b.initilize();
    b.input();
}