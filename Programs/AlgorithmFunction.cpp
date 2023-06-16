#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(int i)
{
    cout << i << endl;
}
int main()
{
    // count()
    vector<int> v = {1, 2, 3, 4, 5, 5};
    cout << "No of element having 4 value is : " << count(v.begin(), v.end(), 4) << endl;
    // adjacent_find()
    int A[] = {10, 13, 16, 16, 18};
    int n = sizeof(A) / sizeof(A[0]);
    int *it = adjacent_find(A, A + n);
    cout << *it << endl;
    // find()
    vector<int>::iterator i;
    i = find(v.begin(), v.end(), 5);
    if (i == v.end())
    {
        cout << "Element not found";
    }
    else
    {
        cout << 5 << " is present in vector " << endl;
    }
    // for_each()
    cout << "Element in Vector" << endl;
    for_each(v.begin(), v.end(), display);
    // search_n()
    vector<int>::iterator ite;
    ite = search_n(v.begin(), v.end(), 2, 5);
    if (ite == v.end())
    {
        cout << 5 << "is not present in vecotr 2 times " << endl;
    }
    else
    {
        cout << "5 is present in vector at " << ite - v.begin() << endl;
    }
    // copy()
    vector<int> vect(6);
    cout << "Copy vector" << endl;
    copy(v.begin(), v.end(), vect.begin());
    for_each(vect.begin(), vect.end(), display);
    // fill()
    cout << "Fill with 0 " << endl;
    fill(v.begin(), v.begin() + 3, 0);
    for_each(v.begin(), v.end(), display);
    // random_shuffle()
    for (int i = 0; i < 7; i++)
    {
        v.push_back(i);
    }
    // unique()
    unique(v.begin(), v.end());
    cout << "Shuffled Vector is " << endl;
    random_shuffle(v.begin(), v.end());
    for_each(v.begin(), v.end(), display);
    // swap()
    int a = 19;
    int b = 20;
    cout << "Before swap" << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    swap(a, b);
    cout << "After swap" << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    //sort()
    cout << "Vector after sorting " << endl;
    sort(v.begin(),v.end());
    for_each(v.begin(),v.end(),display);
    cout << "Deleting adjacent unique element " << endl;
    unique(v.begin(),v.end());
    for_each(v.begin(),v.end(),display);
    //erase()
    // vector<int>::iterator i;
    for(i=v.begin()+5;i!=v.end();i++)
    {
    v.erase(i);
    }
    cout << "After erasing element "<< endl;
    unique(v.begin(),v.end());
    for(i=v.begin()+5;i<v.end()-1;i++)
    {
        v.erase(i);
    }
    for_each(v.begin(),v.end(),display);
    //max_element()
    cout << "Maximum element in vector is " << *max_element(v.begin(),v.end());
    return 0;
}