// Program prompts the user to enter a month (1-12) and a year. If the month is Februrary (2), the program checks if the year enter is a leap year, then it acts accordingly
// PS. If using a switch is better in this situation, could you let me know in your comment? Thank you in advance.

#include <iostream>
using namespace std;
int main()
{
	int year;
	int month;

	// Get the month (1 - 12) and the year
	cout << "Enter a month (1-12):\n";
	cin >> month;
	cin.ignore();

	cout << "Enter a year:\n";
	cin >> year;
	cin.ignore();

	// Check if the month is within range (1 - 12)
	if (month >= 1 && month <= 12)
	{
		if (month == 1)
		{
			cout << "There are 31 days in the month January in " << year << "." << endl;
		}
		else if (month == 2)
		{	
			// Check if the year entered is a leap year, acting accordingly.
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			{
				cout << "There are 29 days in the month of Februrary, in the year " << year << ", since it is a leap year!" << endl;
			}
			else
			{
				cout << "There are 28 days in the month of February, in the year " << year << "." << endl;
			}
			
		}
		else if (month == 3)
		{
			cout << "There are 31 days in the month of March, in the year " << year << "." << endl;
		}
		else if (month == 4)
		{
			cout << "There are 30 days in the month of April, in the year " << year << "." << endl;
		}
		else if (month == 5)
		{
			cout << "There are 31 days in the month of May, in the year " << year << "." << endl;
		}
		else if (month == 6)
		{
			cout << "There are 30 days in the month of June, in the year " << year << "." << endl;
		}
		else if (month == 7)
		{
			cout << "There are 31 days in the month of July, in the year " << year << "." << endl;
		}
		else if (month == 8)
		{
			cout << "There are 31 days in the month of August, in the year " << year << "." << endl;
		}
		else if (month == 9)
		{
			cout << "There are 30 days in the month of September, in the year " << year << "." << endl;
		}
		else if (month == 10)
		{
			cout << "There are 31 days in the month of October, in the year " << year << "." << endl;
		}
		else if (month == 11)
		{
			cout << "There are 30 days in the month of November, in the year " << year << "." << endl;
		}
		else if (month == 12)
		{
			cout << "There are 31 days in the month of December, in the year " << year << "." << endl;
		}
	}
	else
	{
		cout << "Invalid input! Please rerun the progam and enter a value between 1 and 12 for the month.";
	}
	
	return 0;
}
