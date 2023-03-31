#include <iostream>
#include <string.h>
using namespace std;
class bank
{
    string name;
    int long account_no;
    char type_account;
    float balance;

public:
    void setvalue()
    {
        cout << "----------Intial Stage----------" << endl;
        cout << "Enter the name : ";
        cin >> name;
        cout << "Enter the account no : ";
        cin >> account_no;
        cout << "Enter the type of account : ";
        cin >> type_account;
        balance = 0;
    }
    void deposit()
    {
        cout << "----------Deposit Counter----------" << endl;
        float b;
        cout << "Enter the amount : ";
        cin >> b;
        balance += b;
    }
    void withdraw()
    {
        cout << "----------Withdrawl Counter----------" << endl;
        float a;
        cout << "Your current balance is : " << balance << endl;
        cout << "Enter the amount for withdrawl : ";
        cin >> a;
        if (a > balance)
        {
            cout << "You haven't suffecient balance for widthdrawl ";
        }
        balance -= a;
        cout << "Your balance after withdrawl is : " << balance;
    }
    void display()
    {
        cout << "----------Your Detail's----------" << endl;
        cout << "Name : " << name << endl;
        cout << "Balance : " << balance << endl;
    }
    friend bank combine(bank first, bank second);
};
bank combine(bank first, bank second)
{
    bank third;
    third.name = "Joint Acount";
    third.balance = first.balance + second.balance;
    third.type_account = 'j';
    return third;
}
int main()
{
    bank customer[10];
    int c;
    cout << "Enter no of costumer : ";
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cout << "Enter the " << i + 1 << "st contumer details" << endl;
        customer[i].setvalue();
        customer[i].deposit();
        customer[i].withdraw();
        customer[i].display();
    }
    customer[2] = combine(customer[0], customer[1]);
    customer[2].display();
}