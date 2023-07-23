#include <iostream>
using namespace std;
int main()
{
    int num =0;
    int x,y;
    auto increment = [&num] (int x,int y)
    {
        num++;
        x = num;
        y = num;
    };
    increment(x,y);
    cout << num << endl;
    cout << x  << endl;
    cout << y  << endl;
    return 0;
}
