// Program prompts the user to enter a weight (1 - 20) and a distance (10 - 3,000) then shows then what they'll be charged.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double rate;
	double miles;
	double chargeTimes; // How many times is the mile rate charged?
	double charges;
	double weight;

	// Get weigth of the package and disance it will travel
	cout << "Enter the weight of your package in kilograms. (Note that the company will not ship weights below 0kg, or above 20kg)\n";
	cin >> weight;
	cin.ignore();

	cout << "Enter the distance, in miles, the package will be shipped. (Note that the company will not ship distances less than 10mi, or greater than 3,000mi.\n";
	cin >> miles;
	cin.ignore();

	// Check if the weight and distance meets the criteria, then based on that display the charges.
	if (weight > 0 && weight <= 20 && miles >= 10 && miles <= 3000)
	{
		cout << fixed << showpoint << setprecision(2);
		if (weight < 2)
		{
			rate = 1.10;
			chargeTimes = miles / 500.00;
			charges = chargeTimes * rate;

			cout << "The distance you want to ship your package, in miles, is: " << miles << endl;
			cout << "The weight of your package you want to ship, in kilograms, is: " << weight << endl;
			cout << "The rate for the distance entered is: " << rate << "$" << endl;
			cout << "You will be charged: " << charges << "$" << endl;
		}
		else if (weight >= 2 && weight <= 6)
		{
			rate = 2.20;
			chargeTimes = miles / 500.00;
			charges = chargeTimes * rate;

			cout << "The distance you want to ship your package, in miles, is: " << miles << endl;
			cout << "The weight of your package you want to ship, in kilograms, is: " << weight << endl;
			cout << "The rate for the distance entered is: " << rate << "$" << endl;
			cout << "You will be charged: " << charges << "$" << endl;
		}
		else if (weight >= 7 && weight <= 10)
		{
			rate = 3.70;
			chargeTimes = miles / 500.00;
			charges = chargeTimes * rate;

			cout << "The distance you want to ship your package, in miles, is: " << miles << endl;
			cout << "The weight of your package you want to ship, in kilograms, is: " << weight << endl;
			cout << "The rate for the distance entered is: " << rate << "$" << endl;
			cout << "You will be charged: " << charges << "$" << endl;
		}
		else if (weight >= 11 && weight <= 20)
		{
			rate = 4.80;
			chargeTimes = miles / 500.00;
			charges = chargeTimes * rate;
			
			cout << "The distance you want to ship your package, in miles, is: " << miles << endl;
			cout << "The weight of your package you want to ship, in kilograms, is: " << weight << endl;
			cout << "The rate for the distance entered is: " << rate << "$" << endl;
			cout << "You will be charged: " << charges << "$" << endl;
		}
	}
	else
	{
		cout << "Invalid input! Please rerun the progam and enter values within the given criteria.";
	}
	
	return 0;
}
