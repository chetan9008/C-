#include <iostream>
using namespace std;
const int size = 5;
class vector
{
    int arr[size];

public:
    vector()
    {
        for (int i = 0; i < size; i++)
            arr[i] = 0;
    }
    vector(int *arr1)
    {
        for (int i = 0; i < size; i++)
        {
            arr[i] = arr1[i];
        }
    }
    friend vector operator*(int value, vector v)
    {
        vector temp;
        for (int i = 0; i < size; i++)
        {
            temp.arr[i] = value * v.arr[i];
        }
        return temp;
    }
    friend vector operator/(vector v, int value)
    {
        vector temp;
        for (int i = 0; i < size; i++)
        {
            temp.arr[i] = v.arr[i] / value;
        }
        return temp;
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << "   ";
        }
        cout << endl;
    }
    friend istream & operator>>(istream &,vector &);
    friend ostream & operator<<(ostream &,vector);
};
istream & operator >> (istream &take,vector &v)
{
    cout << "Enter the numbers:"<<endl;
    for(int i=0;i<size;i++)
    {
        take >> v.arr[i];
    }
    return(take);
}
ostream & operator << (ostream &print,vector v)
{
    for(int i=0;i<size;i++)
    {
        print << v.arr[i]<<"    ";
    }
    return(print);
}
int main()
{
    int array[size] = {1, 2, 3, 4, 5};
    int array2[size] = {11, 22, 33, 44, 55};
    vector v1;
    v1 = array;
    vector v2 = array2;
    vector v3 = 3 * v1;
    vector v4 = v2 / 11;
    v1.display();
    v2.display();
    v3.display();
    v4.display();

    vector v10 = array2;
    cout << v10 <<endl;
    vector v11;
    cin >> v11;
    cout << v11;
}