#include <windows.h>
#include <iostream>
using namespace std;
void runMeAfterFiveSeconds()
{
    cout << "I'm activated!" << endl;
}
int main()
{
    while (1)
    {
        cout << "hello there!" << endl;
        Sleep(2000);
    }
}