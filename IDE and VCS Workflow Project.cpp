// This program provides an estimate for painting including cost for paint, cost for labor, gallons of paint required, number of labor hours

#include <iostream>
#include <iomanip>
using namespace std;


const double gallonPerSqft = 110.0;
const double laborPerSqft = 8.0;
const double hourlyLaborRate = 25.0;


int getRooms();
double getSqFt(int roomNumber);
double getPricePerGallon(int roomNumber);
int gallonsForRoom(double sqft);
double laborHoursForRoom(double sqft);
void displayEstimate(double paintCharge, int gallonsNeeded, double laborCharge, double laborHours);


int main() {
    int numberOfRooms = getRooms();
    double totalPaintCharge = 0.0, totalLaborCharge = 0.0;
    int totalGallonsNeeded = 0;
    double totalLaborHours = 0.0;

    for (int i = 1; i <= numberOfRooms; ++i) {
        double sqft = getSqFt(i);
        double paintPrice = getPricePerGallon(i);

        int gallons = gallonsForRoom(sqft);
        double laborHours = laborHoursForRoom(sqft);

        totalGallonsNeeded += gallons;
        totalPaintCharge += gallons * paintPrice;
        totalLaborHours += laborHours;
        totalLaborCharge += laborHours * hourlyLaborRate;
    }

    displayEstimate(totalPaintCharge, totalGallonsNeeded, totalLaborCharge, totalLaborHours);
    return 0;
}

// Asks the user for the number of rooms, which cannot be 0.
int getRooms() {
    int rooms;
    do {
        cout << "Enter the number of rooms that will be painted: ";
        cin >> rooms;
        if (rooms < 1)
            cout << "Invalid input, there must be at least 1 room.\n";
    } while (rooms < 1);
    return rooms;
}

// Gets and validates the square footage of a specific room, which cannot be 0.

double getSqFt(int roomNumber) {
    double sqft;
    do {
        cout << "Enter the number of square feet for room " << roomNumber << ": ";
        cin >> sqft;
        if (sqft <= 0)
            cout << "Invalid input, the numebr of square feet must be greater than 0.\n";
    } while (sqft <= 0);
    return sqft;
}

// Gets and validates the price of paint per gallon for a specific room. The price cannot be under $10
double getPricePerGallon(int roomNumber) {
    double price;
    do {
        cout << "Enter price, per gallon, of paint for room " << roomNumber << ": ";
        cin >> price;
        if (price < 10.0)
            cout << "Invalid input, the price must be at least $10.00.\n";
    } while (price < 10.0);
    return price;
}

//Calculates the number of gallons needed, then rounds up to the next whole number.
int gallonsForRoom(double sqft) {
    return static_cast<int>(ceil(sqft / gallonPerSqft));
}

// Calculates amount labor hours based on how many square feet the room is.
double laborHoursForRoom(double sqft) {
    return (sqft / gallonPerSqft) * laborPerSqft;
}

// Displays the full paint job estimate. The gallons, labor hours, labor cost, paint cost, number of rooms, and total cost.
void displayEstimate(double paintCharge, int gallonsNeeded, double laborCharge, double laborHours) {
    double totalCost = paintCharge + laborCharge;

    cout << fixed << setprecision(2);
    cout << "\nPaint Job Estimate:\n";
    cout << "Gallons of paint to purchase: " << gallonsNeeded << endl;
    cout << "Number of hours required to pain rooms: " << laborHours << endl;
    cout << "Cost of paint: $" << paintCharge << endl;
    cout << "Cost of labor: $" << laborCharge << endl;
    cout << "Total cost for job: $" << totalCost << endl;
}