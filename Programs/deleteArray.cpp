#include<iostream>
#include<algorithm>
using namespace std;
void display(int x)
{
    cout << x << endl;
}
int main()
{
    int size = 5;
    int *array = new int[size];
    for(int i=0;i<5;i++)
    {
        array[i] = i+1;
    }
    for_each(array,array+5,display);
    delete []array;
    cout << "after deletion " << endl;
    for_each(array,array+5,display);
    return 0;
}