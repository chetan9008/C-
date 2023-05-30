#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int array[10]= {1,2,3,4,5,6,7,8,9,10};
    ofstream output;
    output.open("number.txt",ios :: out);
    output.write((char *) &array,sizeof(array));
    output.close();
    ifstream input;
    input.open("number.txt",ios :: in);
    input.read((char *) &array,sizeof(array));
    for(int i=0;i<10;i++)
    {
        cout << array[i] << endl;
    }
}