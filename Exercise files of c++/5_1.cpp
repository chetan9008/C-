#include<iostream>
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
        cout << "----------Intial Stage----------"<<endl;
        cout<< "Enter the name : " ; cin >> name;
        cout <<"Enter the account no : ";cin >>account_no;
        cout << "Enter the type of account : "; cin >> type_account; 
        balance = 0;
    }
    void deposit()
    {
        cout << "----------Deposit Counter----------"<<endl;
        float b;
        cout << "Enter the amount : ";
        cin >>b;
        balance +=b;
    }
    void withdraw()
    {
        cout << "----------Withdrawl Counter----------"<<endl;
        float a;
        cout << "Your current balance is : " << float(balance)<<endl;
        cout <<"Enter the amount for withdrawl : ";cin >> a;
        if(a>balance)
        {
            cout << "You haven't suffecient balance for widthdrawl ";
        }
        balance -= a;
        cout << "Your balance after withdrawl is : "<< float(balance); 
    }
    void display()
    {
        cout << "----------Your Detail's----------"<<endl;
        cout << "Name : " << name<<endl;
        cout << "Balance : "<<balance<<endl;
    }
};
 int main()
 {
    int check=1;
    bank a;
    while(check)
    {
        cout << "Enter the code : ";cin >> check;
        switch (check)
        {
        case 1:
        a.setvalue();
        break;
        case 2:
        a.deposit();
        break;
        case 3:
        a.withdraw();
        break;
        case 4:
        a.display();
        break;
        case 0:
        exit(0);
        break;
        default:
        cout << "Please Enter correct code : "<<endl;
            break;
        }
    }
    a.setvalue();
    a.deposit();
    a.withdraw();
    a.display();
    return 0;
 }