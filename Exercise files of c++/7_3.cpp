#include <iostream>
using namespace std;
const int m = 3, n = 3;
class matrix
{
    int **result;
public:
    matrix(char c[10])
    {
        result = new int *[m];
        for (int i = 0; i < m; i++)
        {
            result[i] = new int[n];
        }
    }
    matrix()
    {
        result = new int *[m];
        for (int i = 0; i < m; i++)
        {
            result[i] = new int[n];
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("Enter the [%d][%d] element:", i, j);
                cin >> result[i][j];
            }
        }
    }
    friend ostream &operator<<(ostream &console, matrix ma)
    {
        cout << "Matrix is :" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                console << ma.result[i][j] << "  ";
            }
            cout << endl;
        }
        return (console);
    }
    matrix operator+(matrix s);
    matrix operator-(matrix s);
    matrix operator*(matrix s);
    friend matrix operator*(int n,matrix s);
    void operator-();
};
void matrix :: operator-()
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            result[i][j] = result[j][i];
        }
    }
}
matrix operator *(int number,matrix s)
{
    matrix temp = "empty";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            temp.result[i][j]  = number*s.result[i][j];
        }
    }
    return(temp);
}
matrix matrix ::operator+(matrix s)
{
    matrix temp = "empty";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp.result[i][j] = result[i][j] + s.result[i][j];
        }
    }
    return (temp);
}
matrix matrix ::operator-(matrix s)
{
    matrix temp = "empty";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp.result[i][j] = result[i][j] - s.result[i][j];
        }
    }
    return (temp);
}
matrix matrix ::operator*(matrix s)
{
    matrix temp = "empty";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp.result[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                temp.result[i][j] += result[i][k] * s.result[k][j];
            }
        }
    }
    return (temp);
}
int main()
{
    cout << "Enter the elements of 1st matrix:" << endl;
    matrix m1;
    cout << m1;
    // cout << "Enter the elements of 2st matrix:" << endl;
    // matrix m2;
    // cout << m2;
    // matrix m3 = "empty";
    // m3 = m1 + m2;
    // cout << "Addition of Matrix is :" << endl;
    // cout << m3;
    // m3 = m1 * m2;
    // cout << "Substraction of Matrix is :" << endl;
    // cout << m3;
    // m3 = 2 * m1;
    // cout << m3;
    cout << "Transpose of matrix is :"<<endl;
    -m1;
    cout << m1;
}