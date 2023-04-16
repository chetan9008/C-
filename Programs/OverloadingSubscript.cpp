#include <iostream>
using namespace std;
class array
{
    int arr[5];

public:
    array()
    {
    }

    array(int *array)
    {
        for (int i = 0; i < 5; i++)
        {
            arr[i] = array[i];
        }
    }
    int operator[](int i)
    {
        return (arr[i]);
    }
    friend ostream & operator << (ostream &print,int x)
    {
        print << x ;
        return(print);
    }
};
int main()
{
    int x[5]= {1,2,3,4,5};
        array a1=x;
        for(int i=0;i<5;i++)
        {
            cout << x[i]<<endl;
        }
}