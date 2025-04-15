/*Exercise 7: Create two pointers pointing to the same memory address (shallow copy).
For instance:
int x = 100;
int* p1 = &x; // Pointer 1 points to x
int* p2 = p1; // Pointer 2 copies address (shallow copy)
Modify the value using one pointer and observe the effect on the other*/

#include <iostream>
using namespace std; // being lazy, not a good practice

int x = 123;

int main() {
    int* p1 = &x;
    int* p2 = p1; //pointer 2 copies address of p1 ("shallow copy")
    cout<<"Initial addresses of p1: "<<p1<<endl<<" and p2: "<<p2<<endl; //initial addresses displayed
    cout<<"Initial values of p1: "<<*p1<<endl<<" and p2: "<<*p2<<endl; //initial values displayed
    *p1 = 234; //changing value of p1 to 234 with pointer 1
    cout<<"After changing value with p1 -> addresses p1: "<<p1<<endl<<" and p2: "<<p2<<endl; //After changing w/p1 addresses displayed
    cout<<"After changing p1-> value of p1: "<<*p1<<endl<<" and p2: "<<*p2<<endl; //After changing w/p1 values displayed
    *p2 = 345; //changing value with pointer 2
    cout<<"After changing value with p2 -> addresses p1: "<<p1<<endl<<" and p2: "<<p2<<endl; //After changing w/p2 addresses displayed
    cout<<"After changing p2-> value of p1: "<<*p1<<endl<<" and p2: "<<*p2<<endl; //After changing w/p2, values displayed
} // we can make the observation, that we can change the value of p1 with p2 and so on.