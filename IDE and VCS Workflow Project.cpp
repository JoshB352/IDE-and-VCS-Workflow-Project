// Program displays a pattern.

#include <iostream>
using namespace std;
int main()
{
	// Make pattern A
	cout << "Here is pattern A:" << endl;
	for (int i = 1; i <= 10; ++i)
	{
		for (int bruh = 1; bruh <= i; ++bruh)
		{
			cout << "+";
		}
		cout << endl;
	}

	// Make pattern B
	cout << "Here is pattern B:" << endl;
	for (int i = 10; i >= 1; --i)
	{
		for (int bruh = 1; bruh <= i; ++bruh)
		{
			cout << "+";
		}
		cout << endl;
	}
	return 0;
}
