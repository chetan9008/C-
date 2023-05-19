#include<iomanip>
#include<iostream>
using namespace std;
ostream &line (ostream &print)
{
    print << setw(10) << setfill('*') << '*';
    return(print);
}
ostream &science(ostream &print)
{
    print << setiosflags(ios :: scientific) ;
    return(print);
}
ostream &traingle(ostream &print)
{
    for(int i=1;i<=10;i++)
    {
        cout.fill('*');
        cout.width(i);
        cout << " " << endl;
    }
}
void contatenate(char s[20],char b[20])
{
    cout.write(s,6).write(b,5);
}
int main()
{
    cout << line << "Trapozodial Rule" << line << endl;
    float x = 23.322232232;
    cout << science << x << endl;
    cout << traingle ;
    contatenate("chetan","kumar");
}