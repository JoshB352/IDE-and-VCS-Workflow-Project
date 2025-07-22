/*
 This program produces a table showing degrees Fahrenheit between the values of 0 and 20 with the corresponding Celsius value.
 The table has a title, the columns are labeled, and the temperature values are right aligned in each column. 
 Temperature values are displayed with one decimal point of precision.
*/

#include <iostream>
#include <iomanip>
using namespace std;

const int minimumFahrenheit = 0;
const int maximumFahrenheit = 20;

// This takes as input a temperature value in degrees Fahrenheit and returns the equivalent value of the temperature in degrees Celsius.
double getCelsius(int fahrenheit) {
    return (5.0 / 9) * (fahrenheit - 32);
}

int main() {
    cout << "Fahrenheit Converted to Celsius (0f to 20f)\n";
    cout << setw(12) << "Fahrenheit" << setw(12) << "Celsius" << endl;
    cout << "---------------------------\n";

    for (int fahrenheit = minimumFahrenheit; fahrenheit <= maximumFahrenheit; ++fahrenheit) 
    {
        double celsius = getCelsius(fahrenheit);
        cout << setw(12) << fahrenheit << setw(12) << fixed << setprecision(1) << celsius << endl;
    }

    return 0;
}
