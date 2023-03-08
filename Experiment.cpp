#include<iostream>
using namespace std;
int main()
{
    int t1=5;
    int &t=t1;
    cout <<t << endl;

    t1++;
     
    cout << t;

}

