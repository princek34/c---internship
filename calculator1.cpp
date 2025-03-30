#include<iostream>
using namespace std;

int main() {
    int n1, n2;
    char operation;  // Use char for the operator, not int

    cout << "Enter the first number: ";
    cin >> n1;

    cout << "Enter the second number: ";
    cin >> n2;

    cout << "Enter the operator you want to perform (+, -, *, /): ";
    cin >> operation;  // Take operator as a character

    switch(operation) {
        case '+':
            cout << "Result: " << n1 + n2 << endl;
            break;

        case '-':
            cout << "Result: " << n1 - n2 << endl;
            break;

        case '*':
            cout << "Result: " << n1 * n2 << endl;
            break;

        case '/':
            if (n2 != 0)  // Prevent division by zero
                cout << "Result: " << n1 / n2 << endl;
            else
                cout << "Error: Division by zero is not allowed!" << endl;
            break;

        default:
            cout << "Invalid operator!" << endl;
            break;
    }

    return 0;
}
