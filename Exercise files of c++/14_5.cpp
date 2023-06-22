#include<iostream>
#include<algorithm>
#include<list>
#include<cstring>
using namespace std;
class student
{
    char name[20];
    int roll;
    public:
    student(){}
    student(char *n,int r)
    {
        strcpy(name,n);
        roll = r;
    }
    void display()
    {
        cout << "Name is " << name << endl;
        cout << "Roll is " << roll << endl;
    }
    int search(char* n)
    {
        if(strcmp(n,name) == 0)
        {
            return roll;
        }
    }
};
int main()
{
    list<student> stu;
    stu.push_back(student("chetan",12));
    stu.push_back(student("gaurav",23));
    stu.push_back(student("sparsh",14));
    stu.push_back(student("aman",44));
    stu.push_back(student("bhavna",420));
    list<student>::iterator it;
    for(it=stu.begin();it!=stu.end();it++)
    {
        it->display();
    }
    char name[20];
    cout << "Enter the name to search" << endl;
    cin >> name; 
    int r;
    for(it=stu.begin();it!=stu.end();it++)
    {
        r = it->search(name);
    } 
    cout << name << " roll no is " << r << endl;   
    return 0;
}