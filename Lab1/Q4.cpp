/*Question 4: Macros in C++
Define a macro SQUARE(x) that returns the square of x. Write a C++ program to:
1. Take an integer input from the user.
2. Use the SQUARE(x) macro to print the square of the input.*/
#include <iostream>
using namespace std;
#define SQUARE(x) ((x)*(x))

int main() {
    int Input;
    cout << "Input an integer to square: ";
    cin >> Input;
    cout << "Square of input = " << SQUARE(Input) << endl;
    return 0;
}