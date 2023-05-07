#include<iostream>
using namespace std;
class convertion
{
    public:
    float fa,ce;
    void get()
    {
        cout << "Enter the tempearature in farenheit :";
        cin >> fa;
    }
    void convert()
    {
        ce=(5.0/9.0)*(fa-32.0);
    }
    void display()
    {
        cout <<"Temperature in Celsius is :" << ce;
    }
};
int main()
{
    convertion f;
    f.get();
    f.convert();
    f.display();
}