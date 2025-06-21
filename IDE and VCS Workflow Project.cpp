// Program displays how much the ocean level has risen in the given number of years. (Assuming it raises 1.5 millimeters per year.)

#include <iostream>
using namespace std;
int main()
{
	int years1, years2, years3;

	double riseAmount = 1.5;

	years1 = 5;
	years2 = 7;
	years3 = 10;

	double oceanLevel1, oceanLevel2, oceanLevel3;

	// Calculating how much the ocean level will rise 
	oceanLevel1 = riseAmount * years1;
	oceanLevel2 = riseAmount * years2;
	oceanLevel3 = riseAmount * years3;

	cout << "The ocean levels after " << years1 << " years would be " << oceanLevel1 << " millimeters higher." << endl;
	cout << "The ocean levels after " << years2 << " years would be " << oceanLevel2 << " millimeters higher." << endl;
	cout << "The ocean levels after " << years3 << " years would be " << oceanLevel3 << " millimeters higher." << endl;

	return 0;
}
