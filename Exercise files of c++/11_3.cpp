#include <iomanip>
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
class tel
{
    char name[20];
    int num;

public:
    tel() {}
    tel(char n[20], int nu)
    {
        strcpy(name, n);
        num = nu;
    }
    void display()
    {
        int len = strlen(name);
        cout.fill('*');
        cout << name << setw(len + 10) << num << endl;
    }
};
int main()
{
    char temp[20];
    strcpy(temp, "John");
    tel p[3];
    p[0] = tel(temp, 1234);
    strcpy(temp, "Ahmed");
    p[1] = tel(temp, 98756);
    strcpy(temp, "Chetan");
    p[2] = tel(temp, 7017344);
    ofstream output;
    output.open("11_3_class.txt", ios ::out);
    for (int i = 0; i < 3; i++)
    {
        output.write((char *)&p[i], sizeof(p[i]));
    }
    output.close();
    fstream file;
    file.open("11_3_class.txt", ios ::in);
    file.seekg(0);
    tel temp1;
    while (file.read((char *)&temp1, sizeof(temp1)))
        temp1.display();
    return 0;
}