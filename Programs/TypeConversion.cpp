// basic to class 
            // #include<iostream>
            // using namespace std;
            // class item
            // {
            //     int x;
            //     public:
            //     item()
            //     {

            //     }
            //     item(int v)
            //     {
            //         x = v;
            //     }
            //     friend ostream & operator <<(ostream &print,item i)
            //     {
            //         print << i.x;
            //         return(print);
            //     }
            // };
            // int main()
            // {
            //     item i;
            //     i = 4;
            //     cout << i;
            // }
//class to basic convertion
//by casting operator
            // #include<iostream>
            // using namespace std;
            // class item
            // {
            //     int x;
            //     public:
            //     item(int data)
            //     {
            //         x= data;
            //     }
            //     operator int()
            //     {
            //         return(x);
            //     }
            // };
            // int main()
            // {
            //     item i = 5;
            //     int data = i+i;
            //     cout << data<<endl;
            // }
//converting one class to another class
#include<iostream>
using namespace std;
class inventory2;
class inventory1
{
    int code;
    int item;
    float price;
    public:
    inventory1(int c,int i,float p)
    {
        code = c;
        item = i;
        price = p;
    }
    int returncode(){return code;}
    int returnitem(){return item;}
    float returnprice(){return price;}

    operator inventory2()
    {
        inventory2 temp;
        temp.code = code;
        temp.value = item * price;
        return temp;
    }
};
class inventory2
{
    int code;
    float value;
    public:
    inventory2()
    {

    }
    inventory2(int c,int v)
    {
        code = c;
        value = v;
    }
    // inventory2(inventory1 i)
    // {
    //     code = i.returncode();
    //     value = i.returnitem()*i.returnprice();
    // }
    friend ostream &operator << (ostream & print,inventory2 i)
    {
        print<< i.code<<endl;
        print<<i.value<<endl;
        return(print);
    }
    friend class inventory1;
};
int main()
{
    inventory1 source = inventory1(12,20,200.23);
    inventory2 destination = source;
    // inventory2 destination(12,300.23);
    // inventory1 source = destination;
    cout << destination;
}