/*Question 3: Looping with for loop
Explanation for for loop
• The loop initializes i = 2 (first even number).
• The condition i <= 50 ensures numbers up to 50 are printed.
• The update step i += 2 increments i by 2 each time, ensuring only even numbers are
printed.
• The cout statement prints each number with a space.
Task:
1. Modify the code above to use MACRO: replacing 50 in "i<= 50" with a macro
2. Use the suitable variable types: instead of int I using the most suitable variable
type for the loop*/
#include <iostream>
#define limit 50
using namespace std;

int main() {
 for (unsigned short i = 2; i <= limit; i+=2) {
    cout <<i<< " ";
}
return 0;
}