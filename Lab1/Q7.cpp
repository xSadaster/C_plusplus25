/*Question 7:
Write a C++ program that checks the strength of a user-entered password based on the
following criteria:
1. Length Check: Minimum password length should be 8 characters.
2. Character Types: The password should contain at least:
• One uppercase letter
• One lowercase letter
• One digit
• One special character (e.g., !@#$%^&*)
3. Using a Macro: Define a macro MIN_LENGTH to represent the minimum required length
(8).
4. Using a for Loop: Iterate through the string to check the presence of required character
types.
Final Output:
• If all conditions are met, print "Strong Password"
• Otherwise, print "Weak Password" along with missing criteria*/

#include <iostream>
#include <cctype> // For islower, isupper, isdigit
#define MIN_LENGTH 8 // Using macro as instructed
using namespace std;

void checkPasswordStrength(const string& input) {
    int n = input.length();
    bool hasLower = 0, hasUpper = 0, hasDigit = 0, hasSpecial = 0;

    for (char c : input) {
        if (islower(c)) hasLower = true;
        else if (isupper(c)) hasUpper = true;
        else if (isdigit(c)) hasDigit = true;
        else hasSpecial = true; 
        /* Any character that's not recognized as a character/ number- tehcnically works, 
        but even öä are considered "special" Could've used a "for (char c :Special) {
    if (c == '%' || c == '+' || c == '!' -||-)" - type solution, but it's long and ugly*/
    }
    // Check password strength
    if (n >= MIN_LENGTH && hasLower && hasUpper && hasDigit && hasSpecial) { //if all criteria is satisfied, print "Strong password", else identify missing criteria 
        cout << "Strong Password" << endl;
    } else {cout << "Weak Password. Missing criteria:" << endl;
        if (n < MIN_LENGTH) cout << "- Minimum length of " << MIN_LENGTH << " characters" << endl;
        if (!hasLower) cout << "- At least one lowercase letter" << endl;
        if (!hasUpper) cout << "- At least one uppercase letter" << endl;
        if (!hasDigit) cout << "- At least one digit" << endl;
        if (!hasSpecial) cout << "- At least one special character" << endl;
    }
}

int main() {
    string input;
    cout << "Enter a password to check its strength: ";
    cin >> input;
    checkPasswordStrength(input);   return 0;
}