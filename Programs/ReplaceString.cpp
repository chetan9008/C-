#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str  = "chetan is horse";
    str.replace(5,1,"k");
    cout << str;
    return 0;
}