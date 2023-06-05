#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>
#include <cmath>
#include <math.h>
#include <cstdlib>
#include <algorithm>
int const size = 5;
using namespace std;
template <class any>
class vector
{
    any *v;

public:
    vector() {}
    vector(any *array)
    {
        v = new any[size];
        for (int i = 0; i < size; i++)
        {
            v[i] = array[i];
        }
    }
    void display()
    {
        cout << "Entered array is : " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << v[i] << endl;
        }
    }
    any operator * (vector v)
    {
        any sum =0;
        for(int i=0;i<10;i++)
        {
        sum+= this->v[i]*v.v[i];
        }
        return sum;
    }
};
int main()
{
    float array[size] = {1.11, 2.22, 3.33, 4.44, 5.55};
    vector<float> v(array);
    v.display();
    float array1[size] = {1.1,2.2,3.3,4.4,5.5};
    vector<float> v1(array1);
    v1.display();
    cout << "Scalar product is : " << v*v1 << endl;
    return 0;
}