#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
bool compare(string a,string b)
{
    if(a < b)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void display(string x)
{
    cout << x << endl;
}
int main()
{
    string arr[] = {"india","bangladesh","america","australia","canada","argentina"};
    sort(arr,arr+6,compare);
    for_each(arr,arr+6,display);
    return 0;
}