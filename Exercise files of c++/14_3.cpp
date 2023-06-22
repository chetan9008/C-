#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void display(int x)
{
    cout << x << endl;
}
bool value(int x)
{
    if(x==33)
    {
        return true;    
    }
    else
    {
        return false;
    }
}
int main()
{
    vector<int> v(5,33);
    for_each(v.begin(),v.end(),display);
    cout << "No of specific value is "<<  count_if(v.begin(),v.end(),value);
    return 0;
}