#include <conio.h>
#include <string.h>
#include <iostream>
using namespace std;
class account
{
protected:
    char name[20];
    int acn;
    char type[20];
    float balance;
    bool check = false;

public:
    account(char n[20], int a, char t[20])
    {
        check = true;
        balance = 0;
        strcpy(name, n);
        acn = a;
        strcpy(type, t);
    }
    void putdata(char n[20], int a, char t[20])
    {
        check = true;
        balance = 0;
        strcpy(name, n);
        acn = a;
        strcpy(type, t);
    }
    void deposit(int b)
    {
        if (check == true)
            balance += b;
    }
    void withdrawl()
    {
        int amount;
        cout << "Enter the amount for withdrawl : ";
        cin >> amount;
        balance -= amount;
    }

    void display()
    {
        if (check == true)
            cout << name << " ji Your balance is :" << balance << endl;
        else
            cout << "Please Enter your details first!" << endl;
    }
};
class saving : public account
{
public:
    saving(char n[20], int a, char t[20]) : account(n, a, t)
    {
        cout << "Account is created" << endl;
    }
    void addInterest()
    {
        float interest;
        interest = (2.5 / 100) * balance;
        balance += interest;
    }
};
class current : public account
{
    int minimum;
    int penalty;

public:
    current(char n[20], int a, char t[20]) : account(n, a, t)
    {
        cout << "Account is created" << endl;
        minimum = 10000;
        penalty = 1000;
    }
    void withdrawl()
    {
        if (balance < minimum)
        {
            cout << name << " ji You charged a penalty of 1000" << endl;
            balance -= penalty;
        }
    }
};
int main()
{
    char temp[20] = "chetan";
    char temp2[20] = "current";
    char type[20];
    current s(temp,1234,temp2);
    cout << "\t Please Enter (1) for make account" << endl;
    cout << "\t Please Enter (2) for account details" << endl;
    cout << "\t Please Enter (3) for deposit " << endl;
    cout << "\t Please Enter (4) for withdrawl" << endl;
    cout << "\t Please Enter (5) for check for penalty" << endl;
    cout << "\t Please Enter (6) for add interest" << endl;
    cout << "\t Enter (0) for exit" << endl;
    int i = 1;
    while (i)
    {
        cout << "Enter the option :";
        cin >> i;
        switch (i)
        {
        case 1:
            break;
        case 2:
            s.display();
            break;
        case 3:
            s.deposit(2000);
            break;
        case 4:
            s.account::withdrawl();
            break;
        case 5:
            s.withdrawl();
            break;
        case 6:
            // s.addInterest();
            break;
        default:
            if (i != 0)
            {
                cout << "Please enter valid no" << endl;
            }
            break;
        }
    }
}