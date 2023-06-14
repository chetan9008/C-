#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter x : ";
    cin >> x;
    try
    {
        if(x==1)
        throw('c');
        else
        if(x==2)
        throw(1);
        else
        if(x==3)
        throw(3.3);
    }
    catch(char x)
    {
        cout << "Character exception!" << endl;
    }
    catch(int x)
    {
        cout << "Integer exception!" << endl;
    }
    catch(double x)
    {
        cout << "Decimal exception!" << endl;
    }
    
    return 0;
}