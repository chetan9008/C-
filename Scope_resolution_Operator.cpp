#include<iostream>
using namespace std;
int sum = 10;
int main()
{
    int sum =20;

    {
        int sum =30;

        cout << "We are in Inner Block"<< endl;
        cout << "sum : " << sum << endl << "::sum : " << ::sum << endl;
    }
    cout << "We are in Outer Block" << endl;

    cout << "sum : " << sum << endl << "::sum " << ::sum << endl;
}
