#include<iostream>
using namespace std;
void print_Ascending(int n)
{   // base condition
    if(n==11)
    return;
    cout << n<< endl;
    //Recursive Relation
    print_Ascending(n+1);
}
void   print_Desending(int n)
{
    if(n==11)
    return;
    print_Desending(n+1);
    cout << n << endl;
}
int main()
{   
    print_Ascending(1);
    print_Desending(1);
    }