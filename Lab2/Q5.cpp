#include <iostream>
#define SIZE 8 // Define the size of the array
using namespace std;
int main() {
    int OrigArr[SIZE], RevArr[SIZE]; 
    int* ptr = OrigArr;
    for(int i = 0; i < SIZE; i++){
        OrigArr[i] = i+1;} // initialize array 1,2,3,4... etc for the size of 'SIZE'
    for (int i=0;i<SIZE;i++) {
        RevArr[SIZE-1-i]=*ptr+i;}
cout<<"Check original array: ";
    for(int i=0; i<SIZE; i++){
    cout<<OrigArr[i]<<" ";}
    cout<<endl;
cout<<"Check reversed array: ";
    for(int i=0; i<SIZE; i++){
    cout<<RevArr[i]<<" ";}
    cout<<endl;
    return 0; }