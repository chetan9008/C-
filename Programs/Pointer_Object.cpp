#include<iostream>
using namespace std;
class dynamic
{
    char *str;
    public:
    // dynamic()
    // {
    // }
    dynamic()
    {
        str = new char[30];
        cout << "Enter the string : ";
        gets(str);
    }
    void display()
    {
        cout << "Entered string is : " << str << endl;
    }
};
int main()
{
    dynamic *d[10];
    int *n  = new int;
    cout << "Enter the number of student : " ;
    cin >> *n;
    fflush(stdin);
    int i=0;
    do
    {
        d[i] = new dynamic ;
        // d[i] -> putstring();
        i++;
    }while(i<*n);
    cout << "Entered name is :" << endl;
    i=0;
    do
    {
        d[i] ->display();
        i++;
    }
    while(i<*n);
}