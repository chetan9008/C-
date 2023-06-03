#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    ofstream output("11text.txt");
    output << "i love web development \n i love c \n i love c++";
    output.close();
    fstream file,file1;
    file.open("11text.txt",ios :: in);
    file1.open("11new.txt",ios :: out | ios :: ate);
    file1.clear();
    file1.seekp(0);
    cout << "Pointer is at : " << file1.tellp() << endl;
    char ch;
    while(!file.fail())
    {
        file.get(ch);
        if(ch == '\n')
        {
            ch = ' ';
        }
        file1.put(ch);
        cout << ch ;
    }
    return 0;
}