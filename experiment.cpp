#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(0));

    for (int i = 0; i < 10; i++)
    {
        cout << "Random no is " << (rand() % 1111) + 111 << endl;
    }

    return 0;
}