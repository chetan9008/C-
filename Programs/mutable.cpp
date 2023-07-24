#include <iostream>
using namespace std;
class example
{
    int back_acc;
    mutable int balance;

public:
    explicit example(int b, int ba)
    {
        back_acc = b;
        balance = ba;
    }
    void display() const;
    void modify() const;
};
void example ::display() const
{
    cout << "Account is " << back_acc << endl;
    cout << "Balance is " << balance << endl;
}
void example::modify() const
{
    balance += 10;
    back_acc += 10;
}
int main()
{
    const example e(1234, 1000);
    e.display();
    e.modify();
    e.display();
    return 0;
}