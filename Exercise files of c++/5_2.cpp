#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
class dynamic
{
    int  v[10];
    public:
    void create()
    {
        for(int i=0;i<5;i++)
        {
            v[i] = i;
        }
    }
    void modify()
    {
        int temp,temp1;
        cout<< "Enter the index for modify : " ;
        cin >> temp;
        cout << "Enter the desired number : ";
        cin >> temp1;
        v[temp] = temp1;
    }
    void scalar()
    {
        int temp;
        cout <<"Enter the scalar value : ";
        cin >> temp;
        for(int i=0;i<5;i++)
        {
            v[i] *= temp;
        }
    }
    void display()
    {
        cout << "VECTOR is : \n";
        for(int i=0;i<5;i++)
        {
            cout << v[i]<<endl;
        }
    }
};
int main()
{
   dynamic v;
   v.create();
   v.display();
   v.modify();
   v.display();
   v.scalar();
   v.display();
}