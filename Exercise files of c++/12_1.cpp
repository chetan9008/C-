#include<iostream>
using namespace std;
int const size = 5;
template<class var>
var minimum(var *arr)
{
    var minimum = arr[0];
    for(int i=1;i<size;i++)
    {
        if(minimum > arr[i])
        {
            minimum = arr[i];
        }
    }
    return (minimum);
}
int main()
{
    int array[size]  = {1,0,3,4,5};
    cout << "Minimum is given array is : " << minimum(array);
    return 0;
}