#include <iostream>
using namespace std;
void add()
{
    cout << "ADD" << endl;
}
void sub()
{
    cout << "SUBSTRACTION" << endl;
}
void mul()
{
    cout << "MULTIPLICATION" << endl;
}
int main()
{
    int x;
    char string[30] = "chetan";
    while (x)
    {
        try
        {
            cout << "Enter option: " << endl;
            cin >> x;
            if(x == 1)
            {
                throw(1);
            }
            else
            if(x == 2)
            {
                throw('c');
            }
            else
            if(x == 3)
            {
                throw(2.2);
            }
            if(x != 1 && x!= 2 && x!= 3)
            {
                throw("end");
            }
        }
        catch (int x)
        {
            add();
            cout << string << endl;
        }
        catch (char x)
        {
            sub();
        }
        catch (double x)
        {
            mul();
        }
        catch(char const *x)
        {
            cout << "Enter given option Please" << endl;
        }
    }   
    return 0;
}