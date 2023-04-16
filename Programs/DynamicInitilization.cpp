#include <iostream>
using namespace std;
class bank
{
    long int principal;
    int years;
    float rate;
    float amount;

public:
    bank()
    {
        principal = 0;
        amount = 0;
    }
    bank(long int p, int n, int r);
    bank(long int p, long int  n, float r = 0.12)
    {
        principal = p;
    years = n;
    rate = r;
    float R = 1;
    for (int i = 0; i < n; i++)
    {
        R *= (1.0 + (r));
    }
    amount = p * R;
    }
    void display()
    {
        cout << "Principal amount : ";
        cout << principal << endl;
        cout << "Amount is : ";
        cout << amount << endl;
    }
};
bank ::bank(long int p, int n, int r)
{
    principal = p;
    years = n;
    rate = r;
    float R = 1.0;
    for (int i = 0; i < n; i++)
    {
        R *= (1.0 + (r / 100.0));
    }
    amount = p * R;
}

int main()
{
    bank fd;
    fd.display();
    bank fd1(1000, 3, 18);
    fd1.display();
    bank fd2(1000,2);
    fd2.display();
}