// Program reads a list of students names off of a file (LineUp.txt). Gives the first and last person in a line, alphabetically from their first name. Also gives the number of students in the class.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ifstream nameFile("LineUp.txt");
	if (!nameFile)
	{
		cerr << "Error openning file." << endl;
		return 1;
	}
	string name;
	string firstNameOnList, lastNameOnList;
	int count = 0;

	// Get first and last name from file, along with number of students.
	if (nameFile >> name)
	{
		firstNameOnList = name;
		lastNameOnList = name;
		count = 1;
	}
	while (nameFile >> name)
	{
		count++;
		if (name < firstNameOnList)
		{
			firstNameOnList = name;
		}
		if (name > lastNameOnList)
		{
			lastNameOnList = name;
		}
	}

	// Output Data and close file.
	cout << "This is the number of students: " << count << endl;
	cout << "This is the first person in the line: " << firstNameOnList << endl;
	cout << "This is the last person in the line: " << lastNameOnList << endl;

	nameFile.close();
	return 0;
}
