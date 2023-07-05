#include<iostream>
using namespace std;
class
{
    int data;
    public:
    void getdata(int d)
    {
        data  = d;
    }
    void display()
    {
        cout << "Data is " << data << endl;
    }
}obj;
int main()
{
    obj.getdata(4);
    obj.display();
    return 0;
}