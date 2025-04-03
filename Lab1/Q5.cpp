/*Question 5: Sum of Digits
Write a C++ program to take an integer input and calculate the sum of its digits using a for loop.
Example Input: 1234
Example Output: 10 (1+2+3+4)*/
#include <iostream>
using namespace std;
int main() {
    int number, sum = 0;
    cout << "Enter an integer: ";
    cin >> number; 

    // Loop to calculate the sum of digits This works because integer doesn't store decimal values!!!
    for (int i = number; i > 0; i /= 10) { // Divide by 10 to remove the last digit
        sum += i % 10; // Add the last digit to sum
    }

    cout << "Sum of digits: " << sum << endl << "and the original number was: " << number << endl;;
    return 0;
}