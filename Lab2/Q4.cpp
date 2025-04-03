/*Exercise 4: Write a program that asks the user for numbers continuously.
• If the user enters a negative number, the program stops (break).
• If the user enters zero, it skips processing (continue).
• Otherwise, it prints the square of the number.*/
#include <iostream>

int main() {
int x; // Int x and declare rules outside of the repeating loop
std::cout<<"Positive number gets squared negative stops the program and 0 gets ignored"<<std::endl;
    while(1) //infinite loop
    {    
        std::cout<<"Input number: ";
        std::cin>>x;
    if (x<0){
        break;
    }
    else if (x==0){
        continue;
    }
    else {
        std::cout << "Square of "<<x<< " is " << (x*x) <<std::endl;
    }}
    std::cout<< "Program ended because of a negative input" <<std::endl;
    return 0;
}

  
