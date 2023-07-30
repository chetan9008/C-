#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// we don't use fucntion so that it takes more lines
// which is not readable

// void display(int x)
// {
//     cout << x << endl;
// }
int main()
{

    vector<int> v = {1, 2, 3, 4, 5};
    // while lamda is more readable
    // and takes less lines
    for_each(v.begin(), v.end(), [](int x)
             { cout << x << endl; });

    cout << "Giving name to lamda " << endl;


    auto display = [&v](int x)
    {
        cout << "x is " << x << endl;
        for(auto i=v.begin();i<v.end();i++)
        {
            //as we can change the value by using reference
            *i = 22;
            cout << *i << endl;
        }
    };
    //lamda can calls as same as function
    display(4);

    return 0;
}