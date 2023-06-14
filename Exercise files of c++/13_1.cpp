#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout << "Enter two no:" << endl;
    cin >> a >> b;
    try
    {   
        if(b == 0)
        throw b;
        else
        cout << "a / b is " << a/b << endl;
    }
    catch(float x)
    {
        cout << "Exception arrise!" << endl;
    }
    return 0;
}