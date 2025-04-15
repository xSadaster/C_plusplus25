/*Exercise 8:
Assign an int variable to a reference and modify the reference.
For instance
int a = 100;
int& refA = a; // Reference to a
refA = 30; // Modifying refA modifies a
What happens to variable a when you change refA*/
#include <iostream>
using namespace std;
int a = 100;

int main() {
    int& refA = a; // Create a reference refA that refers to a
    cout <<"Before changing refA: a = "<<a<<endl; // Print the initial value of a
    refA = 30; // Change the value of refA to 30, which also changes the value of a
    cout <<"After changing refA: a = "<<a<<endl; // Print the modified value of a
// we may notice that refA is just another name for a.
    return 0;
}