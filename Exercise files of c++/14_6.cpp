#include<iostream>
#include<algorithm>
#include<cstring>
#include<set>
using namespace std;
int main()
{
    set<int> tree;
    tree.insert(0);
    for(int i=1;i<9;i++)
    {
    tree.insert(1);
    }
    tree.insert(9);
    set<int>::iterator it;
    for(it=tree.begin();it!=tree.end();it++)
    {
        cout << *it << endl;
    }
    return 0;
}