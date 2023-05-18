#include <cmath>
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main()
{
    float sum = 0;
    cout << "n" << setw(18) << "Inverse_of_n" << setw(18) << "Sum_of_terms" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << i;
        float x = 1.0 / float(i);
        sum += x;
        if (i == 10)
        {
            cout.setf(ios ::scientific, ios ::floatfield);
            cout << setw(18) << x;
        }
        else
        if(i == 1)
        {
            cout.setf(ios ::scientific, ios ::floatfield);
            cout << setw(21) << x;
        }
        else
        {
            cout.setf(ios ::scientific, ios ::floatfield);
            cout << setw(19) << setiosflags(ios ::scientific) << x;
        }
        cout.setf(ios ::fixed, ios ::floatfield);
        cout << setw(11) << setprecision(4) << sum << endl;
    }
}