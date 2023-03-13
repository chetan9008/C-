#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> num; // vector are works like a dynammic array
    vector<int> num1 = { 1,2,3,4,5};
    for(int i=0;i<num1.size();i++)
    {
        cout << num1[i] << endl;
    }
    num={10,20,30,40};
    for(int i=0;i<num.size();i++)
    {
        cout << num.at(i) << endl;
    }

    vector<int> num2{1,2,3,4,5};
    for(const &i:num2)
    {
        cout << i << endl;
    }

    int a;
    vector<int> num3;
    for(int i=0;i<5;i++)
    {
        cout << "Enter number:"<< endl;
        cin >> a;
        num3.push_back(a);
    }
    for(const &i:num3)
    {
        cout << i << endl;
    }

    num3.at(0) = 1;
    num3.at(1) = 2;
     
    cout << "After Modifying:" << endl;
    for(const &i:num3)
    {
        cout << i << endl;
    }

    // delete vector

    vector<int> del(5,1);
    del.pop_back();
    del.pop_back();
    cout << "After Deleting";
    for(const &i:del)
    {
        cout << i << endl;
    }
}