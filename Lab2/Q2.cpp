/*Exercise 2: Write a function swap, to swap two floating values by using three approaches
• without pointer or references
• pointers: void swapUsingPointers(int *a, int *b);
• references: void swapUsingReferences(int &a, int &b);
Which can you get from the exercise above? Which methods are suitable for such a task?*/

#include <iostream>
// Making the first function
void Swap(float a, float b){
float changer = a; // changer gets value of a
a = b; // a gets value of b
b = changer; // b gets value of changer (a)
std::cout<<"First swap a = "<<a<< ", b = "<<b<<std::endl; //values are swapped, but not in main
}
// with pointers
void swapUsingPointers (float* a, float* b) {
float changer = *a; // changer gets value of a
*a=*b; // a gets value of b
*b=changer; // b gets value of changer (a) but using pointers instead of variables the values are swapped in main
std::cout<<"Pointer swap a = "<<*a<< ", b = "<<*b<<std::endl;
}
// with references
void swapUsingReferences (float& a, float& b) {
float changer = a; // changer gets value of a
a = b; // a gets value of b
b = changer; // b gets value of changer (a) and using references instead of variables, the values are swapped in main
// we are directly using the variables a and b from main, not just copies of them.
std::cout<<"Reference swap a = "<<a<< ", b = "<<b<<std::endl;
}

int main() {
    float a, b;
    std::cout << "Enter first floating point number (a): ";
    std::cin>>a;
    std::cout << "Enter second floating point number (b): ";
    std::cin>>b;
    // Call the first function
    Swap(a, b);
    std::cout << "After swap without pointers or references: a = "<<a<< ", b = "<<b<<std::endl;
    // Call the second function using pointers
    swapUsingPointers(&a, &b); 
    std::cout << "After swap using pointers: a = " << a << ", b = "<<b<<std::endl;
    // Call the third function using references
    swapUsingReferences(a, b); //references are the easiest way to swap values in main
    std::cout << "After swap using references: a = " << a << ", b = "<<b<<std::endl;
    return 0;
}
    