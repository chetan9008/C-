#include<iostream>
using namespace std;
void TOH(int d,char p1,char p2,char p3)
{
    if(d==1)
    {
        cout <<"Disk move from " << p1 << " to " << p2 <<endl;
        return;
    }
    TOH(d-1,p1,p3,p2);
    cout <<"Disk move from " << p1 << " to " << p2 <<endl;
    TOH(d-1,p3,p2,p1);
}
int main()
{
    int disks;
    cout << "Enter the no of disks : ";
    cin >> disks;
    char p1='s',p2='d',p3='a';
    TOH(disks,p1,p2,p3);
}