#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
// iterative method

// int main()
// {
//     float v,p=10000,r=0.20,R=1;
//     int n=10;
//     for(int i=0;i<n;i++)
//     {
//         R *= (1+r);
//     }
//     v = p*R;

//     cout <<fixed<<"Value is:"<<setprecision(4)<< v;
// }

// Detailed answer

int main()
{
    int spe;
    vector<float> R(10, 1);
    vector<float> v(10, 1);
    vector<int> p = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
    vector<float> r = {.10, .11, .12, .13, .14, .15, .16, .17, .18, .19};
    vector<int> n = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int spe = 0; spe < 10; spe++)
    {
        for (int i = 0; i < n[spe]; i++)
        {
            R[spe] *= (1 + r[spe]);
        }
    }
    for (int k = 0; k < 10; k++)
    {
        v[k] = float(p[k]) * R[k];
        // cout << v[k] << endl;
    }
    cout << setw(0) << "Value:";
    cout << setw(15) << "Principal:";
    cout << setw(10) << "Rate:";
    cout << setw(15) << "No of Years:"<<endl;
    for (int j = 0; j < 10; j++)
    {
        cout << setw(0) <<fixed << setprecision(2) <<  v[j];
        cout << setw(15) << p[j];
        cout << setw(10) << r[j];
        cout << setw(15) << n[j] <<endl;
    }
}
