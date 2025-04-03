/*Question 2: String Class Operations
Write a C++ program that takes a string input from the user and performs the following
operations:
1. Converts the string to uppercase.
2. Counts the number of vowels in the string.
3. Reverses the string and prints the result.
Use the string class from the C++ Standard Library. */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std; //default std

int main() {
string input;
cout<<"Enter a string: ";
getline(cin, input); // fist tried it with cin, but it only took the first word.

string uppercase = input;
std::transform(uppercase.begin(), uppercase.end(), uppercase.begin(), 
::toupper); //found this on the internet, had to #include <algorithm> to use it

cout<<"Input in uppercase: "<<uppercase<<endl;

// Count the number of vowels in the string by comparing to all vowels
int vwCnt = 0;
for (char c : uppercase) {
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        vwCnt++;
    }
}
cout << "Vowel count: " << vwCnt<<endl;

// Reverse
string revSting = input;
reverse(revSting.begin(), revSting.end());
cout << "Reversed string: " << revSting<<endl;

return 0;
}