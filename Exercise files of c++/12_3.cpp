#include<iostream>
using namespace std;
int const size = 7;
template<class var>
int linear(var* arr)
{
        var search;
        cout << "Enter the number to search : " ;
        cin >> search;
        for(int i=0;i<size;i++)
        {
            if(arr[i] == search)
            {
                return i+1;
            }
        }
        cout << search << " is not found in array " << endl;
}
int main()
{
    int arr[10] = {1,2,3,4,5,6,7};
    cout << "Given element is found at " << linear(arr) << " location";
    return 0;
}