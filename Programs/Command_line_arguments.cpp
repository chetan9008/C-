// in ouput panel we have to type .\program_name.exe first_string second_string

#include <iostream>
#include <fstream>
using namespace std;
int main(int argcounter, char *argumentvector[])
{
    cout << "No of arguments is : " << argcounter << endl;
    for (int i = 0; i < argcounter; i++)
    {
        cout << i << " argumentvector is : " << argumentvector[i] << endl;
    }
    int number[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    ofstream o1, o2;
    o1.open(argumentvector[1]);
    o2.open(argumentvector[2]);
    for (int i = 0; i < 10; i++)
    {
        if (number[i] % 2 == 0)
        {
            o1 << number[i];
        }
        else
        {
            o2 << number[i];
        }
    }
    o1.close();
    o2.close();
    ifstream i1, i2;
    i1.open(argumentvector[1]);
    i2.open(argumentvector[2]);
    char temp;
    char temp1;
    cout << "EVEN file is : " << endl;
    while (i1)
    {
        i1.get(temp);
        cout << temp << endl;
        fflush(stdin);
    }
    cout << "ODD file is : " << endl;
    while (!i2.eof())
    {
        i2 >> temp1;
        cout << temp1 << endl;
    }
}