#include<iostream>
using namespace std;
#define m 3
class matrix
{
    int a[m][m];
    public:
    void getdata()
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
            printf("Enter the [%d][%d] elements : ",i,j);
            cin >> a[i][j];
            }
        }
    }
    void display()
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout <<a[i][j]<<"\t";
            }
            cout <<endl;
        }
    }
    
    friend matrix transpose(matrix );
};
matrix transpose(matrix x)
{
    matrix y;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            y.a[i][j] = x.a[j][i];
        }
    }
    return y;
}
int main()
{
    matrix first;
    matrix second;
    first.getdata();
    cout << "Given Matrix"<<endl;
    first.display();
    cout << "Transpose of Matrix is :"<<endl;
    first = transpose(first);
    first.display();
}
