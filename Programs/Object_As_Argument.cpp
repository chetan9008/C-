#include "iostream"
using namespace std;
class time
{
    int hours;
    int minutes;

public:
    void putTime(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    void displayTime()
    {
        cout << hours << " hours and " << minutes << " minutes " << endl;
    }
    void sumTime(time &, time &); // call by reference
};
void time ::sumTime(time &t1, time &t2)
{
    minutes = t1.minutes + t2.minutes;
    hours = minutes / 60;
    minutes = minutes % 60;
    hours = hours + t1.hours + t2.hours;
}
int main()
{
    time t1, t2, t3;
    t1.putTime(2, 35);
    t2.putTime(4, 30);
    t3.sumTime(t1, t2);
    cout << "T1 time is : ";
    t1.displayTime();
    cout << "T2 time is : ";
    t2.displayTime();
    cout << "T3 time is : ";
    t3.displayTime();
}