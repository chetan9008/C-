#include<iostream>
using namespace std;
int main()
{
    int *arr;
    arr = new int[10];
    for(int i=0;i<10;i++)
    {
        arr[i] = i+1;
    }
    int *search = new int;
    cout << "Enter the number : " ;
    cin >> *search;
    int *flag = new int;
    *flag = 0;
    for(int i=0;i<10;i++)
    {
        if(*search == arr[i])
        {
            cout <<  *search << " is at " << i << " location " << endl;
            *flag = 1;
            break;
        }
    }
    if(*flag == 0)
    cout << *search << " is not in the  list "<< endl;
}
