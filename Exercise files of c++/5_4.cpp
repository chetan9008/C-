#include<iostream>
#include<stdlib.h>
using namespace std;
class vector
{
    int *vec = new int[10];
    public:
    void create()
    {
        for(int i=0;i<10;i++)
        {
            vec[i] = i;
        }
    }
    void display()
    {
        cout <<"Array is : "<<endl;
        for(int i=0;i<10;i++)
        {
            cout << vec[i]<<endl;
        }
    }
    void modify(int m,int l)
    {
        vec[l] = m;
    }
    void scalar();
    friend vector add(vector ,vector );
};
vector add(vector first,vector second)
{
    vector temp;
    for(int i=0;i<10;i++)
    {
        temp.vec[i] = first.vec[i] + second.vec[i];
    }
    return temp;
}
void vector :: scalar()
{
    int temp;
    cout <<"Enter the scalar value";
    cin >> temp;
    for(int i=0;i<10;i++)
    {
        vec[i] *= temp;
    }
}
int main()
{
    vector v;
    vector v1;
    vector v2;
    v.create();
    v.display();
    v.modify(23,2);
    v.display();
    v.scalar();
    v.display();
    v1.create();
    v2 = add(v,v1);
    v2.display();
}