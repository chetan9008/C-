#include<iostream>
using namespace std;
class first
{
    protected:
    int a;
    public:
    int b;
    void set();
    int give();
    void display();
};
void first :: set()
{
    cout << "Enter a : ";
    cin >> a; 
    cout << "Enter b : ";
    cin >> b;
}
int first :: give()
{
    return(a);
}
void first :: display()
{
    cout << "a is : ";
    cout << a<<endl;
}
class second : public first
{
    int c;
    public:
    void mul();
    void display();
};
void second :: mul()
{
    set();
    c = give() * b;
}
void second :: display()
{
    cout << "b is : " ;
    cout << b << endl;
    cout << "a * b is : ";
    cout << c << endl;
}
int main()
{
    second s;
    // s.mul();
    // s.display();
    // s.mul();
    // s.display();
    // s.set();
    s.mul();
    s.first::display();//overriding concept
    s.display();
}