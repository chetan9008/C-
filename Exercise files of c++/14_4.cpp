#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
void display(int x)
{
    cout << x << endl;
}
vector<int> merge(int *arr,int arrSize,list<int> l)
{
    vector<int> v;
    for(int i=0;i<arrSize;i++)
    {
        v.push_back(arr[i]);
    }
    list<int>::iterator it;
    for(it = l.begin();it!=l.end();it++)
    {
        v.push_back(*it);
    }
    sort(v.begin(),v.end());
    return v;
}
int main()
{
    int array[] = {2,4,6,8,10};
    int arraySize = sizeof(array) / sizeof(array[0]);
    list<int> linklist;
    for(int i=1;i<10;i=i+2)
    {
    linklist.push_back(i);
    }
    vector<int> v = merge(array,arraySize,linklist);
    for_each(v.begin(),v.end(),display);
    return 0;
}