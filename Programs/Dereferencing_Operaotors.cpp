// #include<stdio.h>
// struct student 
// {
//     int roll;
//     char name[10];
// }s1;
// int main()
// {
//     struct student *p = &s1;
//     p->roll = 4;
//       printf("%d" ,p->roll);
// }

// (->) is used to acces the class data member by pointer variable

// #include"iostream"
// using namespace std;
// class item
// {
//     int i;
//     int j;
//     public:
//     void set_ij(int x,int y)
//     {
//         i=x;
//         j=y;
//     }
//     friend int sum(item it);
// };
// int sum(item it)
// {
//     int item ::* pi = &item ::i;
//     int item ::* pj = &item :: j;
//     item *another = &it;
//     int sum = (it.*pi)+(another->*pj);
//     cout << "Value of i and j is : " << it.*pi <<  "\t" <<it.*pj <<endl;
//     cout << "Sum in function is : " << sum << endl;
//     return sum;
// }
// int main()
// {
//     item n;
//     void (item :: *function) (int ,int ) = &item :: set_ij;
//     (n.*function)(2,3);
//     cout << "sum is : " << sum(n)<<endl;

//     item *second = &n;
//     (second->*function)(4,2);
//     cout << "Sum by another object is : " << sum(*second)<<endl;
// }

#include<iostream>
using namespace std;
class item 
{
    int i;
    int j;
    public:
    void putdata(int x,int y)
    {
        i=x;
        j=y;
    }
    friend int sum(item it);
};
int sum(item it)
{
    int item :: *pi = &item :: i;//pointer type data memeber of class (item)
    int item :: *pj = &item ::j;
    item *another = &it;
    int sum;
    sum = it.*pi+another->*pj;
    return sum;
}
int main()
{
    item f_no;
    void (item :: *another_function)(int ,int ) = &item :: putdata;
    (f_no.*another_function)(2,3);
    cout << "Sum is : " << sum(f_no)<<endl;
    item *s_no = &f_no;
    (s_no->*another_function)(4,5);
    cout << "Sum is : " << sum(*s_no)<<endl;
}