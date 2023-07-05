

#include<iostream>
using namespace std;
class Staticdata
{
    static int count;
    public:
    void increment()
    {   
        count++;
    }
    void display()
    {
        cout << "Value of count is : " << count<< endl;
    }
};
int Staticdata :: count;
int main()
{
    Staticdata a,b,c;
    cout << "count value for all objects:" << endl;
    a.display();
    b.display();
    c.display();
    a.increment();
    b.increment();
    c.increment();
    cout << "After incrementing :"<<endl;
    a.display();
    b.display();
    c.display();
}