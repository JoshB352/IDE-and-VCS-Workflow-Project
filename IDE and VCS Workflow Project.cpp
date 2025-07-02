// Program serves as a geometry calculator.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int choice;
	const long double pi = 3.14159;
	// Make the loop
	do {
		// Give user choices and get input for choice selected.
		cout << "Geometry Calculator" << endl;
		cout << "	1. Caluclate the Area of a Circle" << endl;
		cout << "	2. Caluclate the Area of a Rectangle" << endl;
		cout << "	3. Caluclate the Area of a Triangle" << endl;
		cout << "	4. Quit" << endl;
		cout << "	Enter your choice (1-4) :" << endl;
		cin >> choice;

		cout << fixed << setprecision(2);
		// Detect if input is valid for choice
		if (1 <= choice && choice <= 4)
		{
			// Set what each choice leads to, and detect invalid input.
			if (choice == 1)
			{
				cout << "Enter the radius of the circle: (The program does not accept negative numbers.)\n";
				double radius;
				cin >> radius;
				if (radius < 0)
				{
					cout << "Invalid input, please rerun the program and input a positive number for the radius";
				}
				else
				{
					double area = pow(radius, 2) * pi;
					cout << "The area of the circle is: " << area << endl;
				}
			}
			else if (choice == 2)
			{
				cout << "Enter the the length of the rectangle: (The program does not accept negative numbers.)\n";
				double length;
				cin >> length;
				cout << "Enter the width of the rectangle: (The program does not accept negative numbers.)\n";
				double width;
				cin >> width;
				if (length < 0)
				{
					cout << "Invalid input, please rerun the program and input a positive number for the radius";
				}
				else if (width < 0)
				{
					cout << "Invalid input, please rerun the program and input a positive number for the radius";
				}
				else
				{
					double area = length * width;
					cout << "The area of the rectangle is: " << area << endl;
				}
			}
			else if (choice == 3)
			{
				cout << "Enter the the length of the triangle: (The program does not accept negative numbers.)\n";
				double base;
				cin >> base;
				cout << "Enter the width of the triangle: (The program does not accept negative numbers.)\n";
				double height;
				cin >> height;
				if (base < 0)
				{
					cout << "Invalid input, please rerun the program and input a positive number for the radius";
				}
				else if (height < 0)
				{
					cout << "Invalid input, please rerun the program and input a positive number for the radius";
				}
				else
				{
					double area = base * height * .5;
					cout << "The area of the triangle is: " << area << endl;
				}
			}
			else if (choice == 4)
			{
				cout << "Exiting the program...";
			}
		}
		else
		{
			cout << "Your input is invalid, please input an integer from 1 to 4";
		}

	} while (choice != 4);
	
	return 0;
}
