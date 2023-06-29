#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
void display(char ch)
{
    cout << ch;
}
int main()
{
    string str = "Martin Luther King";
    for_each(str.begin(),str.end(),display);
    cout << endl;
    string::iterator it = str.begin();
    while(it!=str.end())
    {
        cout << *it; 
        it++;
    }
    return 0;
}