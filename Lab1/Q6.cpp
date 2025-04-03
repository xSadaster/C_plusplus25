/*Question 6:
Write a C++ program to reverse the digits of a given number using a for loop.
Example Input: 12345
Example Output: 54321
*/
#include <iostream>
using namespace std;
int main() {
    int number, reversedNumber = 0;
    cout << "Enter an integer: ";
    cin >> number; 

    // Loop to reverse the digits of the number
    for (int i = number; i > 0; i /= 10) { // Divide by 10 to remove the last digit
        reversedNumber = reversedNumber * 10 + i % 10; // Add the last digit to reversedNumber
    }

    cout << "Reversed number: " << reversedNumber << endl << "and the original number was: " << number << endl;;
    return 0;
}

