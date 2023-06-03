#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream output;
    output.open("11_5_source1.txt");
    for (int i = 1; i < 11; i++)
    {
        output << i;
        output << "\n";
        cout << i << endl;
    }
    output.close();
    output.open("11_5_source2.txt");
    for (int i = 11; i < 111; i = i + 11)
    {
        output << i;
        output << "\n";
        cout << i << endl;
    }
    output.close();
    output.open("11_5_target.txt");
    fstream f1, f2;
    f1.open("11_5_source1.txt", ios ::in);
    f2.open("11_5_source2.txt", ios ::in);
    int n;
    while (f1.good())
    {
        f1 >> n;
        output << n;
        output << "\n";
    }
    while (f2.good())
    {
        f2 >> n;
        output << n;
        output << "\n";
    }
    return 0;
}