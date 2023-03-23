#include<iostream>
using namespace std;
int read(int m,int n)
{
    int arr1[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << "Enter the " << "["<<i<<"]"<<"["<<j<<"]" " element : ";
            cin>> arr1[i][j];
        }
    }
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << arr1[i][j] << "\t";
        }
        cout << endl;
    }
}
int main()
{
    int m,n;
    cout << "Enter the m :";cin >> m ;
    cout << "Enter the n :" ;cin >> n ;
    int arr[m][n];
     read(m,n);
}