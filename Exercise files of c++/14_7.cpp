#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    map<string,int> car;
    car.insert(pair<string,int>("bugatti",10));
    car.insert(pair<string,int>("safari",100));
    car.insert(pair<string,int>("lamborgini",30));
    car.insert(pair<string,int>("ferrari",20));
    map<string,int>::iterator it;
    int p;
    map<string,int> price;
    for(it = car.begin();it!=car.end();it++)
    {
        cout << "Enter the price of car " << endl;
        cin >> p;
        price[(*it).first] = p;
        cout << (*it).first << "\t" << p * (*it).second << endl;
    }
    return 0;
}