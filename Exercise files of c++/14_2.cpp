#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
void display(int x)
{
    cout << x << endl;
}
int main()
{
    list<int> linklist;
    for(int i=0;i<5;i++)
    {
        linklist.push_back(i+10);
    }
    for_each(linklist.begin(),linklist.end(),display);    
    list<int>::iterator it;
    int num;
    cout << "Enter the number " << endl;
    cin >> num;
    it = find(linklist.begin(),linklist.end(),num);
    cout << distance(linklist.begin(),it) << endl;
    return 0;
}