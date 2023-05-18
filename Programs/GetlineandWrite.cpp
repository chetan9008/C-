#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char city[30],string[20];
    strcpy(city,"uttar pardesh");
    strcpy(string,"Sarkar");
    int len = strlen(city);
    int len1 = strlen(string);
    for(int i=1;i<=len;i++)
    {
        cout.write(city,i);
        cout << endl;
    }
    for(int i=len;i>=1;i--)
    {
        cout.write(city,i);
        cout << endl;
    }
}