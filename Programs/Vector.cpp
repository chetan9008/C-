#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(int i)
{
    cout << i << endl;
}
void show(vector<int> v)
{
    if (v.empty())
    {
        cout << "Vector is empty" << endl;
        return;
    }
    else
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v.at(i) << endl;
        }
    }
}
int main()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        v.push_back(i + 1);
    }
    cout << "For each" << endl;
    for_each(v.begin(), v.end(), display);
    cout << "Own function " << endl;
    show(v);
    cout << "Capacity is " << v.capacity() << endl;
    // v.clear();
    // show(v);
    vector<int>::iterator it = v.begin();
    cout << "Vector after erase" << endl;
    v.erase(it+1,it+4);
    show(v);
    cout << "Vector after insertion " << endl;
    v.insert(v.begin()+1,2);
    v.insert(v.begin()+2,3);
    v.insert(v.begin()+3,4);
    v.insert(v.begin()+5,5,11);
    v.pop_back();
    show(v);
    cout << "New vector " << endl;
    vector<int> v1(2,10);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.resize(3);
    show(v1);
    cout << "Copy Vector" << endl;
    vector<int> v2(v1);
    show(v2);
    v2.clear();
    v2.insert(v2.begin(),3,3);
    cout << "Before swapping" << endl;
    cout << "V1 " << endl;
    show(v1);
    cout << "V2 " << endl;
    show(v2);
    cout << "After swapping " << endl;
    v1.swap(v2);
    cout << "V1 " << endl;
    show(v1);
    cout << "V2 " << endl;
    show(v2);
    cout << "practising Erase and insert" << endl;
    v1.insert(v1.begin()+2,2,11);
    v1.erase(v1.begin()+2,v1.end()-1);
    show(v1);
    return 0;
}