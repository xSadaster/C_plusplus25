/* Assignment 2:
Create a class Student with the following:
Private Attributes:
• name (string)
• age (int)
• grade (char)
• group (string) = “2025 group”
Public Methods:
Setters:
o void setName(string n)
o void setAge(int a)
o void setGrade(char g)
Getters:
o string getName()
o int getAge()
o char getGrade()
void displayInfo() – prints the student’s info using the getters.
Requirements:
• Create one Student object in main()
• Use the setter methods to assign values to the student
• Use the getter methods to retrieve and print them
• Also call displayInfo() to show full student data */

#include <iostream>
using namespace std;

class Student{
private:
string name;
int age;
char grade;
string group= "2025 group";
public:
// setters first
void setName(string n){
    name=n; }
    
void setAge(int a){
    age=a; }

void setGrade(char g){
    grade=g; }

// then getters
string getName(){
    return name;}
    
int getAge(){
    return age;}

char getGrade(){
    return grade; }

// last but not least DispInfo
void displayInfo(){
cout<<"Name: "<<getName()<<endl<<"Age: "<<getAge()<<endl<<"Grade: "<<getGrade()<<endl<<"Group: "<<group<<endl; }
};

int main(){
Student Student1; // Create the object
Student1.setName("Papu Saroma"); // Set the name
Student1.setAge(25); // age
Student1.setGrade('B'); // and grade
Student1.displayInfo(); // Call displayInfo to print student info
}