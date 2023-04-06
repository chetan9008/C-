#include<iostream>
#include<stdlib.h>
using namespace std;
class matrix
{
    int arr[3][3];
    public:
    matrix(int x=3,int y=3)
    {
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                printf("Enter the [%d][%d] element : ",i,j);
                cin >>arr[i][j];
            }
        }
    }
    void display()
    {
        cout << "Given Matrix is : "<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout << arr[i][j]<<"\t";
            }
            cout << endl;
        }
    }
};
int main()
{
    matrix m;
    m = matrix();
    m.display();
}