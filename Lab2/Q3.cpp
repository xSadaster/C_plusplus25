/*Exercise 3: Create a simple calculator using switch. The user enters two numbers and an
operator (+, -, *, /). The program performs the calculation.
Like:
• user input1: value 1 (value1 can be int or float)
• user input2: value 2 (value2 can be int or float)
• user input3: + Note that “+” can be a character input
Then the calculator should provide the final results*/

#include <iostream>
using namespace std; // no need to use std::cout etc, pretty nice.

char getOperator() {
    char op;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    return op;
}
double calculate(double a, double b, char op) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0) {
                return a / b;
            } else {
                cout << "Error, can't divide by 0" << endl;
                return 0; 
            }
        default:
            cout << "Error, not a valid operator" << endl;
            return 0; // Handle invalid operators
    }
}
int main(){
    double N1, N2;
    char op;
    
    cout << "Enter first number: ";
    cin >> N1;
    cout << "Enter second number: ";
    cin >> N2;
    op = getOperator(); // the cout << ; cin >> is called from inside of the function
    
    double result = calculate(N1, N2, op);
    
    cout << "Result: " << result << endl;
    
    return 0;
}