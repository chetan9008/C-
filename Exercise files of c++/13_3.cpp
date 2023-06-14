#include <iostream>
using namespace std;
int main()
{
    int x;
    while (x)
    {
        cout << "Enter x : ";
        cin >> x;
        try
        {
            if (x == 1)
                throw('c');
            else if (x == 2)
                throw(1);
            else if (x == 3)
                throw(3.3);
        }
        catch(...)
        {
            cout << "All exception found" << endl;
        }
    }
    return 0;
}