#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void display(int x)
{
    cout << x << endl;
}
int main()
{
    vector<int> v;
    for(int i=0;i<5;i++)
    {
        v.push_back(i+1);
    }
    int index;
    cout << "Enter the specific item to delete";
    cin >> index;
    int value;
    v.erase(v.begin()+index-1);
    cout << "Enter the specific item to add";
    cin >> index;
    cout << "Enter the new item" ;
    cin >> value;
    v.insert(v.begin()+index-1,value);
    cout << "Enter the new item to insert at end" ;
    cin >> value;
    v.push_back(value);
    for_each(v.begin(),v.end(),display);
}