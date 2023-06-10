#include <iostream>
using namespace std;
template<class var>
void display(var* arr)
{
    cout << "Entered array is : " << endl;
    for(int i=0;i<5;i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[5];
    try
    {
        for (int i = 0; i < 6; i++)
        {
            if(i >= 5)
            {
                throw(i);
            }
            else
            {
            printf("Enter the [%d] element : ",i);
            cin >> arr[i];
            }
        }
    }
    catch (int i)
    {
        cout << "EXCEPTION FOUND : ARRAY BOUND " << endl;
    }
    display(arr);
    return 0;
}