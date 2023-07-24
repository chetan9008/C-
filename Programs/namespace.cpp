#include <iostream>
using namespace std;
namespace ns1
{
    namespace ns2
    {
        int data;
    }
}
using namespace ns1;
using ns2::data;
int main()
{
    // ns1::ns2::data = 4;
    // cout << ns1::ns2::data << endl;
    data = 4;
    cout << data << endl;

    return 0;
}