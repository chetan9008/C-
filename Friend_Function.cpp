#include"iostream"
using namespace std;
class mean
{
    int a,b;
    public:
    void putdata(int x,int y)
    {
        a=x;
        b=y;
    }
    friend int average(mean );
};
int average(mean m)
{
    return (m.a+m.b)/2;
}
int main()
{
    mean X;
    X.putdata(20,30);
    cout << "Average of two number is : "<< average(X)<<endl;
}