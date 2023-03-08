#include<iostream>
using namespace std;
enum color
{
    yellow,red,blue,green
};
int main()
{
    int select;
    cout << "Enter the code of the color:";cin >> select;
    switch(select)
    {
        case yellow:
        cout << "It is yellow";
        break;

        case red:
        cout << "It is red";
        break;

        case green:
        cout << "It is green";
        break;

        case blue:
        cout << "It is blue";
        break;
    }
}