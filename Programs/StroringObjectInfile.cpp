#include<iomanip>
#include<string.h>
#include<iostream>
#include<fstream>
using namespace std;
class warehouse
{
    char item[10];
    int code;
    float price;
    public:
    warehouse(){}
    warehouse(char i[20],int c,float p)
    {
        strcpy(item,i);
        code = c;
        price = p;
    }
    void display();
};
void warehouse :: display()
{
    cout << setw(20)<<"Item is : "<<item << endl;
    cout.width(20);
    cout << "Code is : "<< code << endl;
    cout.setf(ios :: fixed , ios :: floatfield);
    cout.setf(ios :: showpoint);
    cout.width(20);
    cout << "Price is : " << price << endl;
} 
int main()
{
    char name[20] = "chetan";
    warehouse item;
    item = warehouse(name,rand(),200.22);
    fstream file;
    file.open("number.txt",ios :: in | ios :: out);
    file.write((char *) &item,sizeof(item));
    file.seekp(0);
    file.read((char *) &item,sizeof(item));
    item.display();
    return 0;
}