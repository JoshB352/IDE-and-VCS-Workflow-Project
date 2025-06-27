// Program serves as a math tutor, displaying a problem, and upon the user pressing the "Enter" key, displays the answer.

#include <iostream>
#include <iomanip>
#include <random>
using namespace std;
int main()
{
	const int MIN = 1;
	const int MAX = 999;

	// Set random number engine and distribition objects

	random_device ranEngine;
	uniform_int_distribution<int> firstNumber(MIN, MAX);
	uniform_int_distribution<int> secondNumber(MIN, MAX);

	// Calculate answer
	int number1 = firstNumber(ranEngine);
	int number2 = secondNumber(ranEngine);

	int answer = number1 + number2;

	// Display numbers generated and, after user presses a key, the answer.

	cout << "Here is your addition math problem! Press the \"Enter\" key when you're ready for the answer.\n";
	cout << setw(7) << number1 << endl;
	cout << "+" << setw(6) << number2 << "\n________";
	cin.get();
	cout << setw(7) << answer << "\nHere is the answer! Did you get it right?" << endl;

	return 0;
}
