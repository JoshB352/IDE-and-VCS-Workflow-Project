// Program serves as a math tutor, displaying a problem, and upon the user pressing the "Enter" key, displays the answer.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double rate;
	double principal;
	int timesCompunded;

	// Get Principal, interest rate, and times compounded.
	cout << "What is your principal?\n";
	cin >> principal;
	cin.ignore();

	cout << "What is the interest rate?\n";
	cin >> rate;
	cin.ignore();

	// turn the rate into decimal form
	double rateInDecimal = rate / 100;

	cout << "How many times is it compounded in a year?\n";
	cin >> timesCompunded;
	

	// Calculate answer
	double amount = principal * pow(1 + (rateInDecimal / timesCompunded), timesCompunded);
	double interestEarned = amount - principal;

	// Display numbers and the answer.
	cout << fixed << setprecision(2);
	cout << "Interest rate:" << setw(20) << rate << "%" << endl;
	cout << "Times compounded:" << setw(17) << timesCompunded << endl;
	cout << "Principal: $" << setw(22) << principal << endl;
	cout << "Interest: $" << setw(23) << interestEarned << endl;
	cout << "Amount in savings:$" << setw(15) << amount << endl;

	return 0;
}
