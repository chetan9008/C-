#include<iostream>
using namespace std;
template<class var,int size>
class array
{
    var* arr;
    public:
    array()
    {
        arr = new var[size];
        for(int i=0;i<size;i++)
        {
            arr[i] = i+1;
        }
    }
    void display();
};
template<class var,int size>
void array<var,size> :: display()
{
    cout << "Auto intilized array is : " << endl;
    for(int i=0;i<size;i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    array<int,10> v;
    v.display();
    array<float,100> f;
    f.display();
    array<char,20> c;
    c.display();
    return 0;
}