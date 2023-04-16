#include<iostream>
using namespace std;
class employee
{
    string name;
    int age;
    public:
    void getdata();
    void display();
};
void employee :: getdata()
{
    cout << "Enter the name : " ;
    cin >> name; 
    cout << "Enter the age : ";
    cin >> age;
}
void employee :: display()
{
    cout << "Name is : " << name<<endl;
    cout << "Age is : " << age<<endl;
}
int main()
{
    employee manager[3];
    for(int i=0;i<3;i++)
    {
        cout << "Enter Manager " << i+1 << " Details "<< endl;
        manager[i].getdata();
    }
    for(int i=0;i<3;i++)
    {
        cout <<endl<< "Manager " << i+1 << " Details : "<< endl;
        manager[i].display();
    }
}