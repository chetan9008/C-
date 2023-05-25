#include<string.h>
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int words[4],letters[4];
    char ch[5][50];
     for(int i=0;i<4;i++)
    {
        cout << "Enter the string : " ;
        cin.getline(ch[i],50);
        int len = strlen(ch[i]);
        words[i] = 0;
        letters[i] = len;
        for(int j=0;j<len;j++)
        {
            if(ch[i][j] == ' ')
            {
                words[i]++;
                letters[i]--;
            }
        }
        words[i]++;
    }
    cout << "STRING" << setw(25) << "NO OF WORDS" << setw(25) << "NO OF CHARACTERS" << endl;
    for(int i=0;i<4;i++)
    {
        cout << setiosflags(ios :: left) << ch[i];
        cout << setiosflags(ios :: right) << setw(25) << words[i] ;
        cout << setiosflags(ios :: right) << setw(25) << letters[i] ;
        cout << endl;
    }
    return 0;
}