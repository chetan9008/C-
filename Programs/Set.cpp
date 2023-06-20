#include<functional>
#include<algorithm>
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> tree;
    tree.insert(20);
    tree.insert(40);
    tree.insert(10);
    set<int>::iterator it;
    tree.erase(10);
    for(it=tree.begin();it!=tree.end();it++)
    {
        cout << *it << endl;
    }
    return 0;
}