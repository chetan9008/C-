#include <algorithm>
#include <list>
#include <cstdlib>
#include <iostream>
using namespace std;
void display(list<int> &l)
{
    if (l.empty())
    {
        cout << "List is empty" << endl;
        return;
    }
    else
    {
        list<int>::iterator i = l.begin();
        for (; i != l.end(); i++)
        {
            cout << *i << endl;
        }
    }
}
int main()
{
    list<int> linklist;
    list<int> linklist2(5);
    for (int i = 0; i < 5; i++)
    {
        linklist.push_back(rand() / 100);
    }
    cout << "First linklist " << endl;
    display(linklist);
    list<int>::iterator it;
    cout << "Second link list" << endl;
    for (it = linklist2.begin(); it != linklist2.end(); it++)
        *it = rand() / 100;
    display(linklist2);
    cout << "Linklist insetion at front and end" << endl;
    linklist.push_front(1);
    linklist.push_back(111);
    display(linklist);
    cout << "Linklist deletion at front and end" << endl;
    linklist.pop_back();
    linklist.pop_front();
    display(linklist);
    cout << "Insertion at specific " << endl;
    it = linklist.begin();
    advance(it, 3);
    linklist.insert(it, 333);
    display(linklist);
    cout << "Deletion at specific " << endl;
    it = linklist.begin();
    advance(it, 3);
    linklist.erase(it, linklist.end());
    display(linklist);
    cout << "Deleting Specific value" << endl;
    linklist.remove(0);
    display(linklist);
    cout << "Size of linklist is " << linklist.size() << endl;
    cout << "Merging two linklist " << endl;
    linklist.merge(linklist2);
    display(linklist);
    cout << "Sorting linklist" << endl;
    linklist.sort();
    display(linklist);
    cout << "Reverse linklist" << endl;
    linklist.reverse();
    display(linklist);
    cout << "Before swapping " << endl;
    it=linklist2.begin();
    linklist2.insert(it,7,33);
    display(linklist2);
    cout << "After swapping " << endl;
    linklist.swap(linklist2);
    display(linklist);
    cout << "Splice in c++" << endl;
    linklist2.clear();
    it= linklist2.begin();
    for(int i=0;i<7;i++)
    {
    linklist2.insert(it,rand()/100);
    it++;
    }
    linklist.splice(linklist.end(),linklist2);
    linklist.unique();
    display(linklist);
    return 0;
}