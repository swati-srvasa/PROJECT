#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int lower, upper, number, guess, attempts = 0;
    srand(time(0));

    cout << "Enter the lower bound of the range: ";
    cin >> lower;
    cout << "Enter the upper bound of the range: ";
    cin >> upper;

    number = (rand() % (upper - lower + 1)) + lower; // Generates a random number within the range

    cout << "Guess the number (between " << lower << " and " << upper << "):\n";

    do {
        cin >> guess;
        attempts++;

        if (guess > number) {
            cout << "Lower number please!\n";
        } else if (guess < number) {
            cout << "Higher number please!\n";
        } else {
            cout << "You guessed it in " << attempts << " attempts!\n";
        }
    } while (guess != number);

    return 0;
}
