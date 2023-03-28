#include<iostream>
using namespace std;
void test()
{
    class t
    {
        int data = 4;
        public:
        void display()
        {
            cout << data;
        }        
    };

    t variable;
    variable.display();
}
int main()
{
    test();
}