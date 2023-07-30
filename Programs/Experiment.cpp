#include<iostream>
using namespace std;
namespace inside
	{
		int i;
		void display()
		{
			cout << i << endl;
		}
	}
int main()
{
	
	inside::i = 20;
	return 0;
}
