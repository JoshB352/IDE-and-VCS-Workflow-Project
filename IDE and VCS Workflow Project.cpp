// Program asks for the name of a file (People.txt), and using "*" for each 1,000 people.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	string nameOfFile;
	string nameOfTown;

	int population;
	int year = 1900;
	const int dataInterval = 20;

	// Get name of file
	cout << "Please enter the name of the data file." << endl;
	cin >> nameOfFile;

	cout << "\nPlease enter the name of the town." << endl;
	cin.ignore();
	getline(cin, nameOfTown);

	// Make sure file is found
	ifstream peopleFile(nameOfFile);
	if (!peopleFile)
	{
		cout << "Error occured! Could not open file " << nameOfFile << "." << endl;
		return 1;
	}

	cout << "Population Growth of " << nameOfTown << "." << endl;
	cout << "Each \"*\" represents 1,000 people." << endl;

	// Display population each year.
	while (peopleFile >> population)
	{
		cout << year << ": ";
		for (int i = 0; i < (population / 1000); ++i)
		{
			cout << "*";
		}
		cout << endl;
		cout << "__________________________________";
		cout << endl;
		year += dataInterval;
	}

	peopleFile.close();
	return 0;
}
