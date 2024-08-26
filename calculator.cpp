#include <iostream>

using namespace std;

// Function to perform addition
double add(double num1, double num2) {
    return num1 + num2;
}

// Function to perform subtraction
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function to perform multiplication
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Function to perform division
double divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Error: Division by zero is undefined.\n";
        return 0;
    }
}

int main() {
    double num1, num2;
    char operation;
    double result;

    cout << "Simple Calculator\n";
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            result = add(num1, num2);
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = subtract(num1, num2);
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = multiply(num1, num2);
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            result = divide(num1, num2);
            if (num2 != 0) {
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            }
            break;
        default:
            cout << "Invalid operation! Please choose one of +, -, *, /.\n";
    }

    return 0;
}