#include<fstream>
#include<string.h>
#include<iostream>
#include<iomanip>
using namespace std;
class employee
{
    char name[20];
    int salary;
    public:
    employee(){}
    employee(char n[20],int s)
    {
        strcpy(name,n);
        salary = s;
    }
    void display()
    {
        cout << "Name is : " << name << endl;
        cout << "Salary is : " << salary << endl;
    }
};
int main()
{
    fstream file;
    file.open("number.txt",ios :: in | ios :: out | ios :: ate);
    employee temp;
    file.seekg(0);
    cout << setfill('*') << setw(30) << "DISPLAYING CONTEND OF FILE" << endl;
    while(file.read((char *) &temp,sizeof(temp)))
    {
        temp.display();
    }
    file.clear();
    char ch[20] = "aman saini";
    temp = employee(ch,16000);
    // file.write((char *) &temp,sizeof(temp));
    file.seekg(0,ios :: beg);
    cout << setfill('*') << setw(30) << "ADDING CONTEND OF FILE" << endl;
    while(file.read((char *) &temp,sizeof(temp)))
    {
        temp.display();
    }
    file.clear();
    cout << setfill('*') << setw(30) << "CONTEND OF FILE" << endl;
    file.seekg(0,ios :: end);
    int end = file.tellg();
    int individual = sizeof(temp);
    cout << "No of object is : " << end / individual << endl;
    cout << "Space occupied is : " << end << endl;
    cout << setfill('*') << setw(30) << "MODIFIED CONTEND OF FILE" << endl;
    int location =  7;
    file.seekp((location-1)*individual);
    strcpy(ch,"harsh");
    temp = employee(ch,30000);
    file.write((char *) &temp,sizeof(temp));
    file.seekg(0);
    while(file.read((char *) &temp,sizeof(temp)))
    {
        temp.display();
    }
}