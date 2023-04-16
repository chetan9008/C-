#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    // here we use explicit type casting
    int integer= 2;
    char character = 'a';
    cout << "Integer is " << setw(5) << integer <<endl;
    cout << "Character is " << setw(5) << character << endl;
    cout << "Now With Type Casting"<< endl;
    cout << "Integer is " << setw(5) << char(integer) << endl;
    cout << "Float is " << setw(5) << int(character);
}