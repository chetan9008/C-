#include"iostream"
using namespace std;
class first;
class second;
class first
{
    int value;
    public:
    void putdata(int data)
    {
        value = data;
    }
    void display( );
    friend void swap(first &,second &);
};
void first :: display()
{
    cout << value<<endl;
}
class second
{
    int value;
    public:
    void putdata(int data)
    {
        value = data;
    }
    void display();
    friend void swap(first &,second &);
};
void second :: display()
{
    cout << value<<endl;
}
void swap(first &x,second &y)
{
    int temp ;
    temp = x.value;
    x.value = y.value;
    y.value = temp;
}
int main()
{
    first f;
    second s;
    f.putdata(10);
    s.putdata(20);
    cout << "Before Swapping" << endl;
    cout << "First is : " ;f.display();
    cout << "Second is : " ; s.display();
    swap(f,s);
    cout << "After Swapping" << endl;
    cout << "First is : "; f.display();
    cout << "Second is : "; s.display();
}

