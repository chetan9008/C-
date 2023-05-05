#include<iostream>
using namespace std;
void show(int **s)
{
    cout <<**s << "\t";
}
void display(int *n)
{
    show(&n);
}
int main()
{
    int arr[4]={23,21,22,24};
    for(int i=0;i<4;i++)
    {
        display(&arr[i]);
    }
    return 0;
}
