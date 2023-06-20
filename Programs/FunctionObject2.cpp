#include<functional>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {11,22,33,44,55};
    int arr1[] = {111,222,333,444,555};
    int result[10];
    sort(arr,arr+5,greater<int>());
    // transform(arr1,arr1+5,arr,result,divides<int>());
    for(int i=0;i<5;i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}