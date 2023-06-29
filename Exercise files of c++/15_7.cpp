#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    size_t count  = 0;
    string str = "It is new. It is singular.\n It is simple. It must succeed!";
    for(size_t i=0;i<str.size();i++)
    {
        if((str.at(i) == ' ' )&&(str.at(i+1) == 's'))
        count++;
    }
    cout << count << endl;
    return 0;
}