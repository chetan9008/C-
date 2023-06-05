#include <iostream>
#include<iomanip>
using namespace std;
template <class any>
class display
{
    any *v;
    int size;

public:
    display()
    {
    }
    display(int n, any *arr)
    {
        v = new any[size = n];
        for (int i = 0; i < size; i++)
        {
            v[i] = arr[i];
        }
    }
    void show()
    {
        cout << "Entered array is : " << endl;
        cout.setf(ios ::showpoint);
        for (int i = 0; i < size; i++)
        {
            cout << fixed << setprecision(2) << v[i] << endl;
        }
    }
};
int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display<int> v(10, array);
    v.show();
    float array1[10] = {11.1,22.2,33.3,44.4,55.5,66.6,77.7,88.8,99.9,110.11};
    display<float> vector(10,array1);
    vector.show();
    return 0;
}