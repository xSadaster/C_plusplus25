// Excercise 1 of Lab 2
/*'Write a function multiply that takes two integers as parameters and returns their
product.
B. Write an overloaded version of the function multiply that takes two doubles.
C. Write an overloaded version of the function multiply that take 3 inputs including one
integer, one double, and one flag value.
When the flag value is set false, the output result = integer * double.
When the flag value is set true, the output result = integer * double and the result is
ceiled or floored to generate the final integer value
The main will call the multiply functions with different inputs. Print out the final result values in
different cases'*/

#include <iostream>
#include <cmath> 
using namespace std;


int multiply(int a, int b) {
    return a * b;
}
double multiply(double a, double b) {
    return a*b;
}
int multiply(int a, double b, bool flag) {
    if (flag==0)
    return a * b;
    else {
    int Ans = std::round(a * b); //function rounds to nearest integer, tried using only floor at first
    return (Ans); // Print rounded integer value
    } }

int main() {
    //inputting test values, tried adding them as user inputs, but it was pretty inefficient.
    int Ia = 9, Ib = 8;
    double Da = 5.7, Db = 2.2;
    bool flag = true;

    std::cout << "multiply(int, int) (first case): " << multiply(Ia, Ib) << std::endl; 
    std::cout << "multiply(double, double)(second case): " << multiply(Da, Db) << std::endl; 
    std::cout << "multiply(int, double, bool)  (third case, rounded integer): " << multiply(Ia, Da, flag) << std::endl; // Output: 27

    return 0;
}