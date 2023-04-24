#include<iostream>
using namespace std;
class FLOAT
{
    float number;
    public:
    FLOAT(){}
    FLOAT(float n)
    {
        number = n;
    }
    FLOAT operator + (FLOAT s)
    {
        FLOAT temp;
        temp.number = number + s.number;
        return(temp);
    }
    FLOAT operator - (FLOAT s)
    {
        FLOAT temp;
        temp.number = number - s.number;
        return(temp);
    }
    void operator = (FLOAT temp)
    {
        number = temp.number;
    }
    void  operator *= (FLOAT s)
    {
        number *= s.number;
    }
    void operator -()
    {
        number = -number;
    }
    FLOAT operator /(FLOAT temp)
    {
        FLOAT t;
        t.number = number / temp.number;
        return(t);
    }
    FLOAT operator %(FLOAT temp)
    {
        FLOAT t;
        t.number = int(number) % int(temp.number);
        return(t);
    }
    friend FLOAT operator +(float n,FLOAT var);
    friend ostream & operator << (ostream &,FLOAT f);
};
ostream & operator <<(ostream &print,FLOAT f)
{
    print<<f.number<<endl;
    return(print);
}
FLOAT operator + (float n,FLOAT var)
{
    FLOAT temp;
    temp.number = n + var.number;
    return(temp);
}
int main()
{
    FLOAT first(3.2);
    FLOAT second(4.1);
    FLOAT third;
    third = first + second;
    cout << third;
    third = 3.0 + first;
    cout << third;
    third = third - second;
    cout << third;
    third *= third;
    cout << third;
    third = first;
    cout << third;
    -third;
    cout << third;
    third = first/second;
    cout << third;
    third = first %second;
    cout << third;
}