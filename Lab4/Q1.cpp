/*Assignment 1:
Create a class Complex that represents complex numbers with real and imaginary parts.
Implement the following:
Overload:
• + to add two complex numbers
• - to subtract two complex numbers
• / to divide two complex numbers
• << using a friend function to print in the form a + bi
Test cases:
Create two complex numbers and display their sum, difference, and quotient.
Note: Remember to use friend for operator << and the class needs to have a constructor
The main functions:
int main() {
 Complex c1(4, 5), c2(2, -3);
 cout << "c1 = " << c1 << endl;
 cout << "c2 = " << c2 << endl;
 cout << "Sum = " << c1 + c2 << endl;
 cout << "Difference = " << c1 - c2 << endl;
 cout << "Quotient = " << c1 / c2 << endl;
 return 0; }*/