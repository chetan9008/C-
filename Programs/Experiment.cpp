#include <iostream>
using namespace std;
class base
{
    int pri;

protected:
    int pro;

public:
    int pub;
    void putdata()
    {
        pri = 1;
        pro = 2;
        pub = 3;
    }
    void display()
    {
        cout << "Private member is : " << pri << endl;
    }
    int givePrivate()
    {
        return(pri);
    }
};
class derived : protected base
{
    int derived_pri;

public:
    void putdata()
    {
        pub = 30;
        pro = 20;
    }
    void display()
    {
        // cout << "Private memeber is : "<< givePrivate()<<endl;
        cout << "Protected member is : " << pro << endl;
        cout << "Public member is : " << pub << endl;
    }
};
int main()
{
    base first;
    first.putdata();
    derived second;
    second.putdata();
    first.display();
    second.display();
}