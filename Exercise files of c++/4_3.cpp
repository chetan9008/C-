#include<iostream>
#include<iomanip>
using namespace std;
void matrix(int m,int n=2)
{
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << "Enter the " << "["<<i<<"]"<<"["<<j <<"]" << " element :";cin >> arr[i][j];
        }
        cout << endl;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << setw(4) <<arr[i][j];
        }
        cout << endl;
    }

}
int main()
{
    int m;
    cout << "Enter m :";cin>>  m;
    matrix(m);
}