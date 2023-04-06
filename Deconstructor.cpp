#include<iostream>
using namespace std;
class item
{
    int data=0;
    char *s;
    public:
    item()
    {
        s= new char;
        *s='c';
        data++;
        cout << data <<endl;
        cout << *s<<endl;
        cout << " Object is created\n";
    }
    ~item()
    {
        delete s;
        cout <<" Object is deleted\n";
    }
};
int main()
{
    item i;
    item i1;
    item i2;
}