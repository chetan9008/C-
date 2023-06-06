#include<iostream>
using namespace std;
int const size = 5;
template<class var>
var minimum(var *arr)
{
    var min = arr[0];
    for(int i=1;i<size;i++)
    {
        if(min > arr[i])
        min = arr[i];
    }
    return (min);
}
template<class vari>
vari maximum(vari *arr)
{
    vari max = arr[0];
    for(int i=1;i<size;i++)
    {
        if(max < arr[i])
        {
            max = arr[i] ;
        }
    }
    return(max);
}
int main()
{
    int num[size] = {1,2,3,4,5};
    char ch[size] = {'a','`','(',')','@'};
    float decimal[size] = {1.30,1.303,1.3033,1.3,1.333};
    cout << "Minimum no in array is : " << minimum(num) << endl;
    cout << "Minimum ascii value character is : " << minimum(ch) << endl;
    cout << "Minimum decimal no is : " << minimum(decimal) << endl;
    cout << "Maximum no in array is : " << maximum(num) << endl;
    cout << "Maximum ascii value character is : " << maximum(ch) << endl;
    cout << "Maximum decimal no is : " << maximum(decimal) << endl;
    return 0;
}