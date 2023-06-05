#include<iostream>
using namespace std;
template<class var>
void swaping(var &x,var &y)
{
    var temp = x;
    x = y;
    y = temp;
}
template<class variable>
void bubblesort(variable *x,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(x[j] > x[j+1])
            {
                swap(x[j],x[j+1]);
            }
        }
    }
}
int main()
{
    // int a = 20,b = 30;
    // cout << "Before swaping : "<< endl;
    // cout << " a = " << a << " b = " << b << endl;
    // cout << "After swaping : " << endl;
    // swaping(a,b);
    // cout << " a = " << a << " b = " << b << endl;
    int array[10] = {2,4,26,2,2,3,23,2,35,6};
    bubblesort(array,10);
    for(int i=0;i<10;i++)
    {
        cout << array[i] << endl;
    }
    cout << endl;
    float arr[5] = {22.2,77.3,33.3,88.2,1.22};
    bubblesort(arr,5);
    for(int i=0;i<5;i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}