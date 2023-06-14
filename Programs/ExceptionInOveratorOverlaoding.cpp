#include <iostream>
using namespace std;
class complex
{
    double a;

public:
    complex() {}
    complex(double x)
    {
        a = x;
    }
    complex operator/(complex x)
    {
        try
        {
            if (x.a == 0)
            {
                throw(this);
            }
        }
        catch (...)
        {
            cout << "exception found" << endl;
            exit(0);
        }
        complex temp;
        temp.a = this->a / x.a;
        return (temp);
    }

    friend ostream &operator<<(ostream &print, complex x)
    {
        print << x.a;
        return (print);
    }
};
int main()
{
    complex a = 3;
    complex b = 8;
    complex c;
    c = a / b;
    cout << "Add of two complex no is :" << endl;
    cout<< c << endl;
    return 0;
}