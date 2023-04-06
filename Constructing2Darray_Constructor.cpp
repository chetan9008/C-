#include <iostream>
using namespace std;
class matrix
{
    int **p;
    int r;
    int c;

public:
    matrix(int x, int y)
    {
        r = x;
        c = y;
        p = new int *[r]; // array of pointers
        for (int i = 0; i < r; i++)
        {
            p[i] = new int[c];
        }
    }
    void getdata()
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                printf("Enter the [%d][%d] element : ",i,j);
                cin >> p[i][j];
            }
        }
    }
    void display()
    {
        cout << "Given Matrix is : "<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout << p[i][j]<<"\t";
            }
            cout << endl;
        }
    }
    ~matrix()
    {
        for(int i=0;i<c;i++)
        {
        delete p[i];
        }
        delete p;
        cout << "Now the Matrix is destroyed!";
    }
};
int main()
{
    int m1,n;
    cout << "Enter the size of matrix  : ";
    cin >> m1 >> n;
    matrix m(m1,n);
    m.getdata();
    m.display();
}