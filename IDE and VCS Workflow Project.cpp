// This program gets the length and width of a rectangle, then calculates and displays its perimeter and area

#include <iostream>
using namespace std;

void getLength_Width(double& length, double& width);\
double calcPerimeter(double length, double width);
double calcArea(double length, double width);
void displayProperties(double perimeter, double area);

int main()
{
	char askToContinue;
	double perimeter, area;
	double length, width;

	 do {
        getLength_Width(length, width);
        perimeter = calcPerimeter(length, width);
        area = calcArea(length, width);
        displayProperties(perimeter, area);

        cout << "\nDo you want continue the program? Type 'y' for YES, or 'n' for NO: ";
        cin >> askToContinue;
        askToContinue = toupper(askToContinue);
    } while (askToContinue == 'Y');

    cout << "Terminat(or)ed..." << endl;
    return 0;
}

/*
 This function prompts the user to enter the length and width of a rectangle and validates the input. It returns both quantities back to the calling function. Validation – length and width must be > 0.
(Note – Since this function returns two values, the parameters must be passed by reference).
 */
void getLength_Width(double& length, double& width) {
    do {
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        if (length <= 0)
            cout << "Invalid input. Please enter a length that is positive and greater than 0.\n";
    } while (length <= 0);

    do {
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        if (width <= 0)
            cout << "Invalid input. Please enter a width that is positive and greater than 0.\n";
    } while (width <= 0);
}

/*
 This function takes as input the length and width of a rectangle, calculates the perimeter, and returns the result of the calculation to the caller.
(Note – This function assumes that the length and width are provided and that the values have been validated. This function returns the perimeter to the calling function which then decides what to do with the value)
 */
double calcPerimeter(double length, double width) {
    return 2 * (length + width);
}

/*
 This function takes as input the length and width of a rectangle, calculates the area and returns the area to the caller.
(Note – This function assumes that the length and width are provided and that the values have been validated. This function returns the perimeter to the calling function which then decides what to do with the value.)
 */
double calcArea(double length, double width) {
    return length * width;
}

/*
 This function takes as input the perimeter and area of a rectangle and displays these values on the monitor.
(Note – this function does not return anything to the caller, so the postcondition is that it writes the values to the display).
 */
void displayProperties(double perimeter, double area) {
    cout << "\nRectangle Properties:";
    cout << "\nPerimeter: " << perimeter;
    cout << "\nArea: " << area << endl;
}

