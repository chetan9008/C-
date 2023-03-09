// #include<iostream>
// using namespace std;
// int main()

// {
//     int total =10;
//     int &sum = total;

//     cout << sum <<endl;

//     total = total +1;

//     cout << sum << endl;
// }

#include<iostream>
using namespace std;
void reference(int &alias)
{
    alias=alias + 10;
}
int main()
{
    int x=10;
    reference(x);

    cout <<"x will changed to:"<< x;
}