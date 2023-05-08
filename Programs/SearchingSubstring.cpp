#include<string>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    char string[20] = "chetan is here" ;
    char *str;
    str = new char[20];
    cout << "Enter the string to search : ";
    gets(str);
    int i=0,j,k;
    int len = strlen(str);
    while(string[i] != '\0')
    {
        j=0,k=i;
        while(str[j] != '\0')
        {
            if(string[k] == str[j])
            {
                if(j == len-1)
                {
                    cout << str << " is found"<< endl;
                    return 0;
                    exit(0);
                }
                j++;
                k++;
            }
            else
            break;
        }
        i++;
    }
    cout << str << " is not found " << endl;
    return 0;
}