#include<iostream>
#include<iomanip>
using namespace std;
int read(int arr[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter [%d][%d] element : ",i,j);
            cin >> arr[i][j];
        }
    }
    return arr[3][3];
}
void display(int arr[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout <<setw(3) <<arr[i][j] ;
        }
        cout << endl;
    }
}
int main()
{
    int arr[3][3];
    arr[3][3] = read(arr);
    display(arr);
}