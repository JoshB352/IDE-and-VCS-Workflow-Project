// This program determines the safest driving region in the city based on the number of accidents reported for each region during the past year.

#include <iostream>
#include <string>
using namespace std;

void getRegInfo(string& regionName, int& accidents);
bool isLower(int a, int b);
void showLowest(const string& regionName, int accidents);

int main() {
    const int numberOfRegions = 5;
    string regionName, lowestRegion;
    int accidents, lowestAccidents;

    getRegInfo(regionName, accidents);
    lowestRegion = regionName;
    lowestAccidents = accidents;

    for (int i = 1; i < numberOfRegions; ++i) 
    {
        getRegInfo(regionName, accidents);
        if (isLower(accidents, lowestAccidents)) 
        {
            lowestRegion = regionName;
            lowestAccidents = accidents;
        }
    }

    showLowest(lowestRegion, lowestAccidents);
    return 0;
}

// This function gets the name of a region and the number of accidents that occurred in that region during the past year. The number of accidents must be greater than or equal 0.
void getRegInfo(string& regionName, int& accidents) {
    cout << "Enter the name of a region: ";
    cin >> regionName;

    do {
        cout << "Enter number of accidents that occured in " << regionName << ": ";
        cin >> accidents;
        if (accidents < 0)
            cout << "Invalid input. Number of accidents must be greater than or equal to 0.\n";
    } while (accidents < 0);
}

// This function takes two integer values as input, it returnsa bool value that is true if the first value is <= the second value, otherwise the bool value returns false.
bool isLower(int a, int b) {
    return a <= b;
}

/*
 This function gets the name of the region with the lowest reported accidents for the year and the number of accidents for that region. It displays these values on the number.
(Note – this function does not return anything to the caller, so the postcondition is that it writes the values to the display).
 */
void showLowest(const string& regionName, int accidents) {
    cout << "\nThe region with the least amount of reported accidents is " << regionName << " with " << accidents << " reported accidents." << endl;
}
