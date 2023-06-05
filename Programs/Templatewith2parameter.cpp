#include<iostream>
#include<iomanip>
using namespace std;
template<class var=int,class var1=int>
class vector
{
    var* array;
    var1* arr;
    int size;
    public:
    vector(){}
    vector(var* a,var1* b)
    {
        size = 5;
        array = new var[size];
        arr = new var1[size];
        for(int i=0;i<size;i++)
        {
            array[i] = a[i];
            arr[i] = b[i];
        }
    }
    void display()
    {
        cout << "First array is : " << endl;
        for(int i=0;i<size;i++)
        {
            cout << array[i] << endl;
        }
        cout << endl << endl;
        cout << "Second array is : " << endl;
        for(int i=0;i<size;i++)
        {
            cout << arr[i] << endl;
        } 
    }
};
int main()
{
    int array[5] = {1,2,3,4,5};
    float arr[5] = {12.2,23.2,35.3,43.3,58.6};
    vector<int,float> v;
    v = vector<int,float>(array,arr);
    v.display();
    vector<> v1;
    v1 = vector<>(array,array);
    v1.display();
    return 0;
}