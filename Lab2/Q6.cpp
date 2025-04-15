/*Exercise 6:
Create a program using struct and switch to manage student records. The program should:
1. Use a struct Student to store a student’s name, ID, and grade.
2. Allow the user to:
(a) Add a student.
(b) Display all students.
(c) Search for a student by ID.
(d) Exit the program.
Note: struct can be
struct Student {
 char name[50];
 int id;
 float grade;
};*/
#include <iostream>
using namespace std;
#define MAX_Students 100 // Maximum number of students in the array of students

struct Student {
    char name[50];
    int id;
    float grade;
}; 
//made the struct just as instructed.

int main() {
    Student students[MAX_Students]; // Array of "students"
    int StudentCounter = 0; // Counter for the number of students in the array
    int choice; // Variable to store user choice (for the switch states)
    while(1) { // Infinite loop until exited
    cout<<endl<<"Choose an option: "<<endl<<" 1) Add a student "<<endl<<" 2) Display all students "<<endl<<" 3) Search for a student by ID "<<endl<<" 4) Exit the program "<<endl;
    cout<<"Enter option: ";
    cin>>choice; // Get user choice
    
    switch (choice) {
        case 1: // Add a student
            if (StudentCounter < MAX_Students) { // is there space for students?
                cout << "Enter student name: ";
                cin >> students[StudentCounter].name; // Get student name
                cout << "Enter student ID: ";
                cin >> students[StudentCounter].id; // Get student ID
                cout << "Enter student grade: ";
                cin >> students[StudentCounter].grade; // Get student grade
                StudentCounter++; // Increment number of students
            } else { cout << "Student list is full." << endl; }
            break;

        case 2: // Display all students
            cout << "List of students: " << endl;
            for (int i = 0; i < StudentCounter; i++) { // Loop through all students
                cout << "Name: " << students[i].name << ", ID: " << students[i].id << ", Grade: " << students[i].grade << endl; // Display student info
            }
            break;
        case 3: // Search for a student by ID
            int searchId;
            cout << "Enter student ID to search: ";
            cin >> searchId; // Get student ID to search for
            for (int i = 0; i < StudentCounter; i++) { // Loop through all students
                if (students[i].id == searchId) { // Check if ID matches
                    cout << "Student info -- Name: " << students[i].name << ", ID: " << students[i].id << ", Grade: " << students[i].grade << endl; // Display student info
                    break; // Exit loop if student is found
                }}
            break;
        case 4: // Exit the program
            cout << "Exiting the program." << endl;
            return 0; // Exit the program
        default:
            cout << "Error, not a valid operator" << endl;
            break;
    }}}