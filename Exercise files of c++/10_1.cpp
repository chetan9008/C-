#include<string.h>
#include<iomanip>
#include<iostream>
using namespace std;
class table
{
    char name[5][20];
    int code[5];
    float cost[5];
    public:
    table()
    {
        //name
        strcpy(name[0],"Turbo c++");
        strcpy(name[1],"Dev c++");
        strcpy(name[2],"Code Blocks");
        strcpy(name[3],"Vs code");
        //code
        for(int i=0,j=0;i<4;i++,j=j+10)
        {
            code[i] = 1001-j;
        }
        //price
        float j = 0.0;
        for(int i=0;i<4;i++,j = j+50.25)
        {
            cost[i] = 250.95 - j;
        }
    }  
    
    void display()
    {
        cout << "NAME" << setw(20) << "CODE" << setw(20) << "COST" << endl;
        cout.setf(ios :: left,ios :: adjustfield);
        for(int i=0;i<4;i++)
        {
            cout.fill('-');
            cout.setf(ios :: left,ios :: adjustfield);
            cout.setf(ios :: showpoint);
            cout << setw(20) << name[i];
            cout << setw(20) << code[i];
            cout <<setiosflags(ios :: right) << cost[i] << endl;
        }
    }      
};
int main()
{
    table t;
    t.display();
    return 0;
}