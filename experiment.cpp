#include<bits/stdc++.h>
using namespace std;
class s
{
    static int counter;
    int data;
    public:
    s(int x)
    {
        data = x;
        counter++;
    }
    void display();
    static void c_value()
    {
        cout << "Counter is " << counter << endl;
    }
};
int s::counter;
void s::display()
{
    cout << "Data is " << data << endl;
}
int main()
{
    s var(10);
    var.display();
    s var1(20);
    var1.display();
    s var2(30);
    var2.display();
    var.display();
    s::c_value();
    return 0;
}