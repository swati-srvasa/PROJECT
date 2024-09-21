#include <iostream>
using namespace std;

int main() {
    int number;
    char choice;

    do {
        cout << "Enter a number: ";
        cin >> number;

        if (number % 2 == 0) {
            cout << number << " is even." << endl;
        } else {
            cout << number << " is odd." << endl;
        }

        // Ask the user if they want to check another number
        cout << "Do you want to check another number? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program exited." << endl;
    return 0;
}
