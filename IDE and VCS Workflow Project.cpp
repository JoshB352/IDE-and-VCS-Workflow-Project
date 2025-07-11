// Program predicts the amount of organisms in a populations based on the numbers givven

#include <iostream>
using namespace std;
int main()
{
	int populationStart;
	double dailyPercent;
	int numberOfDays;

	// Collect numbers from user.
	cout << "This program predicts the size of a population of organisms." << endl;
	cout << "What is the starting number of organism? (Note that the starting size cannot be less than 2): ";
	cin >> populationStart;
	while (populationStart < 2)
	{
		cout << "\nInvalid input. Please enter a number that is greater than or equal to 2: ";
		cin >> populationStart;
	}
	cin.ignore();

	cout << "\nWhat is the average daily population increase (Note that a negative number will not be accepted by the program): ";
	cin >> dailyPercent;
	while (dailyPercent < 0)
	{
		cout << "\nInvalid input. Please enter a number that is not negative: ";
		cin >> dailyPercent;
	}
	cin.ignore();

	cout << "\nWhat is the number of days they will multiply for (Note that the number of days cannot be less than 1): ";
	cin >> numberOfDays;
	while (numberOfDays < 1)
	{
		cout << "\nInvalid input. Please enter a number that is greater than or equal to 1: ";
		cin >> numberOfDays;
	}

	// Calculate and display numbers.
	cout << "\nDay\tPopulation\n";
	cout << "____________________\n";
	int population = populationStart;

	for (int day = 1; day <= numberOfDays; ++day)
	{
		cout << day << "\t" << population << endl;
		population += (population * (dailyPercent / 100));
	}
	return 0;
}
