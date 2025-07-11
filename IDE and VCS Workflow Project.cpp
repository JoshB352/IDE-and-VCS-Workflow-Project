// Program generates a random number, then asks the user to try and guess that number, telling them to go lower or higher depending on the input. When guessed, the program displays the ammount of attempts it took.

#include <iostream>
#include <random>
using namespace std;
int main()
{
	const int min = 1;
	const int max = 100;

	random_device engine;

	uniform_int_distribution<int> numberGenerated(min, max);

	int randomNumber = numberGenerated(engine);
	int numberGuessed;
	int guessAmount = 0;

	cout << "Guess a number between 1 and 100: ";

	do
	{
		cin >> numberGuessed;
		guessAmount++;

		if (numberGuessed > randomNumber)
		{
			cout << "Lower: ";
		}
		else if (numberGuessed < randomNumber)
		{
			cout << "Higher: ";
		}
	} while (numberGuessed != randomNumber);

	cout << "You guessed right! It took you " << guessAmount << " attempts to guess " << randomNumber << "." << endl;
	return 0;
}
