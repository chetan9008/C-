#include<iostream>
using namespace std;
int const size = 5;
template<class var>
class vector
{
    var* arr;
    public:
    vector(){}
    vector(var* a)
    {
        arr = new var[size];
        for(int i=0;i<size;i++)
        {
            arr[i] = a[i];
        }
    }
    void modify(int,var);
    var mul(var*);
    void display();
};
template<class var>
void vector<var> :: modify(int i,var n)
{
    arr[i-1] = n;
}
template<class var>
var vector<var> :: mul(var* a)
{   
    var sum = 0;
    for(int i=0;i<size;i++)
    {
    sum += arr[i] * a[i];
    }
    return (sum);
}
template<class var>
void vector<var> :: display()
{
    cout << "Entered array is : " << endl;
    for(int i=0;i<size;i++)
    {
        cout << arr[i] << endl;
    }
}   
int main()
{
    float arr1[size] = { 1,2,3,4,5};
    float arr[size] = { 23.2,4.2,373.3,424.3,33.5};
    vector<float> v = arr;
    v.modify(1,11);
    float scalar  = v.mul(arr1);
    v.display();
    cout.setf(ios :: showpoint);
    cout << "Scalar value is : " << scalar << endl;
    return 0;
}