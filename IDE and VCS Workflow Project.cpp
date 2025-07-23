// This program calculates a performer’s score. Five judges each contribute a score, the highest and lowest score is dropped and the remaining three are averaged

#include <iostream>
#include <iomanip>
using namespace std;

double getScore();
bool isLower(double a, double b);
bool isHigher(double a, double b);
double calcAverage(double total, double minimumScore, double maximumScore);

int main() {
    const int amountOfJudges = 5;
    double score, total = 0;
    double minimumScore, maximumScore, averageScore;

    score = getScore();
    minimumScore = maximumScore = score;
    total += score;

    for (int i = 1; i < amountOfJudges; ++i)
    {
        score = getScore();
        total += score;

        if (isLower(score, minimumScore))
            minimumScore = score;
        if (isHigher(score, maximumScore))
            maximumScore = score;
    }

    averageScore = calcAverage(total, minimumScore, maximumScore);

    cout << fixed << setprecision(2);
    cout << "\nFinal average score (after excluding the highest and lowest scores): " << averageScore << endl;

    return 0;
}

// This functions asks the user to enter one of the five judge's scores, returnging a score within the range of 0 to 10 based on the users input.

double getScore() {
    double score;
    do 
    {
        cout << "Enter the judge's given score. Scores range from 0 to 10: ";
        cin >> score;
        if (score < 0.0 || score > 10.0)
            cout << "Invalid input, the score must be between 0 and 10.\n";
    } while (score < 0.0 || score > 10.0);
    return score;
}

// This function takes two integer values as input, it returns true if the first value is <= the second value, otherwise it returns false.

bool isLower(double a, double b) {
    return a <= b;
}

// This function takes two integer values as input, it returns true if the first value is >= the second value, otherwise it returns false.
bool isHigher(double a, double b) {
    return a >= b;
}

/*
 This function takes as input the total of all the scores, the number of scores, the minimum score value and the maximum score value.
 It returns the average of the three middle scores by subtracting out the minimum and maximum scores from the total.
 */
double calcAverage(double total, double minimumScore, double maximumScore) {
    return (total - minimumScore - maximumScore) / 3.0;
}
