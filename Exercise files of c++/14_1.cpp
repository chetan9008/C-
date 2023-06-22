#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
void display(int x)
{
    cout << x << endl;
}
using namespace std;
int main()
{
    vector<int> v(10);
    v.at(0) = 0;
    v.at(9) = 9;
    for(int i=1;i<9;i++)
    {
        v.at(i) = 1;
    }
    for_each(v.begin(),v.end(),display);
    return 0;
}