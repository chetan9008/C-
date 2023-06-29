#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    size_t count=0;
    string str = "write a program that reads a list of countries in random order";
    for(size_t i=0;i<str.size();i++)
    {
        if(str.at(i) == 'a')
        {
            count++;
        }
    }   
    cout << "a is occured at " << count << " times " << endl;
    return 0;
}