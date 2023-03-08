#include<iostream>
using namespace std;
class convert
{
    public:
    float fa,ce;
    void get();
    void formula();
    void display();
};
void convert :: get()
{
    cout << "Enter the Temperature in Farenheit:" ; cin >> fa;
}
void convert :: formula()
{
    ce=(5.0/9.0)*(fa-32.0);
}
void convert :: display()
{
    cout << "Tempearture in Celsius is :" << ce;
}
int main()
{
    convert first;
    first.get();
    first.formula();
    first.display();
}