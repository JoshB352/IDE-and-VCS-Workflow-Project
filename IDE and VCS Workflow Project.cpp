// Program displays the approximate number of customers in the survey purchasing one or more energy drinks per week. And, of those who purchase one or more a week, the approximate number of customers preferring citrus-flavored energy drinks.

#include <iostream>
using namespace std;
int main()
{
	int percent1, percent2, surveyAmount;
	
	// 16,500 people took the survey, out of those people 15% buy energy drinks once or more a week. And out of thos who buy once or more a week, 58% prefer citrus-flavored energy drinks.
	percent1 = 15;
	percent2 = 58;
	surveyAmount = 16500;

	double whoPurchased, flavorFavour;

	// Calculate amount of people based on the percentages.
	whoPurchased = surveyAmount * percent1 / 100;
	flavorFavour = whoPurchased * percent2 / 100;

	// Display calculations to the program user.
	cout << "Out of the " << surveyAmount << " people who took the survey, 15% (" << whoPurchased << ") percent of them buy one or more energy drinks per week." << endl;
	cout << "Out of the " << whoPurchased << " people who buy one or more energy drinks per week, 58% (" << flavorFavour << ") prefer citrus-flavored energy drink." << endl;

	return 0;
}
