/*Question 1: Using Namespaces
Write a C++ program that creates two namespaces, MathOperations and TextOperations. In
MathOperations, define a function add(int, int) that returns the sum of two integers. In
TextOperations, define a function concat(string, string) that concatenates two strings. Use both
functions in main().*/
#include <iostream>
using namespace std;

namespace MathOperations {
    int add(int a, int b) {
        return a+b; }
} 
namespace TextOperations {
string concat(string a, string b) {
    return a+b; }
 }
// using a & b just to show that the names of the variables don't matter

int main() {
// Ask integers for MathOp & print
int n1, n2;
cout<<"Enter number 1: ";
cin>>n1;
cout<<"Enter number 2: ";
cin>>n2;
cout<<"The sum is: " << MathOperations::add(n1, n2)<<endl;

// TextOp asking for strings and print when both strings are given
string s1, s2;
cout<<"Enter string 1:";
cin>>s1;
cout<<"Enter string 2:";
cin>>s2;
cout<<"Concatenated strings: "<<TextOperations::concat(s1, s2)<<endl;

return 0;
}