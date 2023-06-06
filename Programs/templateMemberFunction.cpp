#include<iostream>
using namespace std;
template<class var>
class vector
{
    var* array;
    int size;
    public:
    vector(var* arr)
    {
       size = 5;
        array = new var[size];
        for(int i=0;i<size;i++)
        {
            array[i] = arr[i];
        }
    }
    void display();
    var operator*(vector);
};
template<class var>
void vector<var> :: display()
{
    cout << "Given array is : " << endl;
    for(int i=0;i<size;i++)
    {
        cout << array[i] << endl;
    }
} 
template<class var>
var vector<var> :: operator *(vector v)
{
    var sum =0;
    for(int i=0;i<size;i++)
    {
        sum += this->array[i]*v.array[i];
    }
    return (sum);
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    vector<int> v(arr);
    v.display();
    vector<int> v1(arr);
    int r = v * v1;
    cout << "Scalar product is : " << r << endl;
    return 0;
}