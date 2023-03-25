#include<iostream>
using namespace std;
class test
{
    int code;
    static int count;
    public:
    void setcode()
    {
        code = ++count;
    }
    void displayCode()
    {
        cout <<code<<endl;
    }
    static void displayCount()
    {
        cout << count << endl;
    }
};
int test :: count;
int main()
{
    test t1,t2,t3;
    t1.setcode();
    t2.setcode();
    t3.setcode();
    cout << "Code of t1 is : ";
    t1.displayCode();
    cout << "Code of t2 is : ";
    t2.displayCode();
    cout << "Code of t3 is : ";
    t3.displayCode();

    cout << "No of objects are : ";
    test :: displayCount();
}