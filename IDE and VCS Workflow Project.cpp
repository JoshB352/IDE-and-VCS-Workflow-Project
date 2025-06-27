// Program displays how much ingredients are needed, in cups, for amount of cookies input.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int cookieAmount;

	double const sugarInCups = 1.5 / 48;
	double const flourInCups = 2.75 / 48;
	double const butterInCups = 1.0 / 48;

	double neededSugar, neededFlour, neededButter;
	
	// Get amount of cookies that are wanted

	cout << "How many cookies do you want to make?" << endl;
	cin >> cookieAmount;

	// Calculate ingredients needed based on user input

	neededSugar = sugarInCups * cookieAmount;
	neededFlour = flourInCups * cookieAmount;
	neededButter = butterInCups * cookieAmount;

	// Display calculation 

	cout << fixed << setprecision(2);
	cout << "This is the amount of each ingredient you will need, in cups:\n";
	cout << "Amount of sugar needed in cups: " << setw(6) << neededSugar << endl;
	cout << "Amount of flour needed in cups: " << setw(6) << neededFlour << endl;
	cout << "Amount of butter needed in cups: " << setw(6) << neededButter << endl;

	return 0;
}
