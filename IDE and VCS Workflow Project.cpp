// Program displays distance able to be traveled in town versus on the highway. (Assuming 20 gallons of gas are in the tank.)

#include <iostream>
using namespace std;
int main()
{
	double townGallonMile, highwayGallonMile;

	// Average miles per gallon when driven in town versus the highway.
	townGallonMile = 23.5;
	highwayGallonMile = 28.9;

	// Gallons of gas in the tank
	int gallons = 20;

	double townDistance, highwayDistance;

	// Calculate distance
	townDistance = townGallonMile * gallons;
	highwayDistance = highwayGallonMile * gallons;

	// Display calculations to the program user.
	cout << "On " << gallons << " gallons of gas while driving in town at an average of " << townGallonMile << " miles per gallon. The distance able to be traveled is: " << townDistance << " miles." << endl;
	cout << "On " << gallons << " gallons of gas while driving on the highway at an average of " << highwayGallonMile << " miles per gallon. The distance able to be traveled is: " << highwayDistance << " miles." << endl;

	return 0;
}
