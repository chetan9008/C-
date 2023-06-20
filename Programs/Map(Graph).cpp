#include <string>
#include <string.h>
#include <algorithm>
#include <map>
#include <iostream>
using namespace std;
typedef map<string,int> Map;
void display(map<string, int> g)
{
    if (g.empty())
    {
        cout << "map is empty" << endl;
        return;
    }
    else
    {
        map<string, int>::iterator it;
        for (it = g.begin(); it != g.end(); it++)
        {
            cout << "Key is " << (*it).first << endl;
            cout << "Value is " << (*it).second << endl;
        }
        cout  << endl << endl;
    }
}
int main()
{
    string key;
    int value;
    map<string, int> graph;
    for (int i = 0; i < 1; i++)
    {
        cin >> key;
        cin >> value;
        graph[key] = value;
    }
    display(graph);
    graph.clear();
    display(graph);
    graph.insert(pair<string,int>("aman",12));
    graph.insert(pair<string,int>("kashish",25));
    graph.insert(pair<string,int>("Bhavna",13));
    graph.insert(pair<string,int>("sparsh",17));
    graph["aditya"] = 44;
    graph.erase("aman");
    graph.erase("kashish");
    display(graph);
    cout << "Size of graph is " << graph.size() << endl;
    cout << "Enter the name: " << endl;
    cin >> key ; 
    map<string,int>::iterator it = graph.find(key);
    cout << "Value is " << (*it).second << endl;
    cout << "Second way Value is " << graph[key] << endl;
    Map g2;
    g2["mia"] = 50;
    g2["lana"] = 90;
    g2["jia"] = 100;
    g2["danny"] = 101;
    graph.swap(g2);
    cout << "Frist graph" << endl;
    display(graph);
    cout << "Second graph" << endl;
    display(g2);
    return 0;
}