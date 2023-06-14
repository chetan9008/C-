#include<string.h>
#include<iostream>
using namespace std;
class error
{
    int code;
    char *err;
    public:
    error(int c,char *e)
    {
        code = c;
        err = new char[strlen(e)];
        strcpy(err,e);
    }
    void display()
    {
        cout << "Error Code is : " << code << endl;
        cout << "Error is : " << err << endl;
    }
};
int main()
{
    error e(404,"Page not Found");
    try
    {
        cout << "Enter any key and Press Enter: ";
        getc(stdin);
        throw(e);
    }
    catch(error e)
    {
        cout <<  "EXCEPTION FOUND! " << endl;
        e.display();
    }
    return 0;
}