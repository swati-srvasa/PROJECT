#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op, choice;

    do {
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter an operator (+, -, *, /): ";
        cin >> op;

        // Check if the operator is valid
        if (op != '+' && op != '-' && op != '*' && op != '/') {
            cout << "Invalid operator: " << op << endl;
            cout << "Do you want to try again? (y/n): ";
            cin >> choice;
            if (choice == 'n' || choice == 'N') {
                break; // Exit the loop
            } else {
                continue; // Continue the loop
            }
        }

        cout << "Enter second number: ";
        cin >> num2;

        // Perform the calculation based on the operator
        switch (op) {
            case '+':
                result = num1 + num2;
                cout << num1 << " + " << num2 << " = " << result << endl;
                break;

            case '-':
                result = num1 - num2;
                cout << num1 << " - " << num2 << " = " << result << endl;
                break;

            case '*':
                result = num1 * num2;
                cout << num1 << " * " << num2 << " = " << result << endl;
                break;

            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "Error! Division by zero." << endl;
                }
                break;

            default:
                cout << "Error! Incorrect Operator" << endl;
                break;
        }

        // Ask the user if they want to continue or exit
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program exited." << endl;
    return 0;
}
