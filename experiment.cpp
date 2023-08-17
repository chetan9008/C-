#include <windows.h>
#include <bits/stdc++.h>
using namespace std;
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void color(int c)
{
    SetConsoleTextAttribute(console, c);
}
int main()
{
    system("cls");
    cout << "output" << endl;
    color(2);

    return 0;
}