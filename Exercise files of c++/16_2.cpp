#include<iostream>
using namespace std;
namespace constant
{
    const int  data = 4;
    const void display()
    {
        cout << "Data is " << data << endl;
    }
}
using constant::display;
// using namespace constant;
int main()
{
    cout <<"Data in main is : " <<  constant::data <<endl;
    display();
    return 0;
}