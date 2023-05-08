#include<iostream>
using namespace std;
class item
{
    int code;
    int price;
    public:
    // item(){}
    // item(int x,int y)
    // {
    //     code  = x;
    //     price = y;
    // }
    void setdata(int x,int y)
    {
        code = x;
        price = y;
    }
    void display()
    {
        cout << "Code is : " << code << endl;
        cout << "Price is :" << price << endl;
    }
};
int main()
{
    item *k = new item[2];
    for(int i=0;i<2;i++)
    {
        // k->~item(2,4);
        k->setdata(2,4);
        k++;
    }
    k = k-2;
    for(int i=0;i<2;i++)
    {
        k->display();
        k++;
    }
}