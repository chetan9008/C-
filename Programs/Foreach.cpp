#include <iostream>
#include <typeinfo>
#include<vector>
#include<algorithm>
using namespace std;
 void function(int i)
 { 
    cout << i << endl; 
 }
int main() {
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    for_each(arr.begin(),arr.end(),function);
}