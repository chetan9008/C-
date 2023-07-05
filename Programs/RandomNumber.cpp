#include<iostream>
#include<time.h>
#include<string>
using namespace std;
int main()
{
    srand(time(0));
    cout << rand()%100 << endl;
}