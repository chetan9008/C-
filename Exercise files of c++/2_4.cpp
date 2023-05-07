#include<iostream>
using namespace std;
class ex{
    public:
    int a,b,c,x;
    void get(void);
    void equation(void);
    void display(void);
};
void ex :: get()
{
    cout << "Enter a,b,c\n" ; cin >> a ; cin >> b ; cin >>c;
}
void ex :: equation()
{
    x=a/b-c;
}   
void ex :: display()
{
    cout << "Equation x = (a/b) - c "<< endl;
    cout << x;
}
int main()
{
    ex eq;
    eq.get(); eq.equation();   eq.display(); return 0;
    
}