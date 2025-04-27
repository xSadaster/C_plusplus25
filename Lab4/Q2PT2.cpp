/* Example 2:
In this example, we will utilize the same Book class as above 
(it was in pictures, so not included here)
but we have another class named
BookShelf
Expected output given. (as a screenshot)

Assignment 2: Reproduce the class Book and BookShelf from example 1 and example 2 above
to generate the same expected outputs. Show the advantages and disadvantages of these
examples. What does the destructor do in these cases. Can the program still work if we remove
destructor in these cases?

but we have another class named
BookShelf this time.
Expected output given. (as a screenshot)

Assignment 2: Reproduce the class Book and BookShelf from example 1 and example 2 above
to generate the same expected outputs. Show the advantages and disadvantages of these
examples. What does the destructor do in these cases. Can the program still work if we remove
destructor in these cases?*/
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    int pages;

public:
    // Constructor
    Book(string t = "Untitled", int p = 0) : title(t), pages(p) {
        cout << "Constructor: \"" << title << "\" with " << pages << " pages.\n";
    }

    // Destructor
    ~Book() {
        cout << "Destructor: \"" << title << "\" destroyed.\n";
    }

    // Display book details
    void display() const {
        cout << "Title: " << title << ", Pages: " << pages << endl;
    }
};

class BookShelf {
private:
    Book* books;
    int size;

public:
    // Constructor that creates a bookshelf with 3 books
    BookShelf() {
        size = 3;
        books = new Book[size]{
            Book("C++ Fundamentals", 300),
            Book("Data Structures", 450),
            Book("Algorithms", 500)
        };
        cout << "BookShelf constructor: Shelf initialized with " << size << " books.\n";
    }

    // Destructor deletes the array of books
    ~BookShelf() {
        delete[] books;
        cout << "BookShelf destructor: Shelf destroyed.\n";
    }

    // Display all books in the shelf
    void displayBooks() const {
        cout << "\n---Library Contents---\n";
        for (int i = 0; i < size; ++i) {
            books[i].display();
        }
    }
};

int main() {
    // Creating a bookshelf called shelf
    BookShelf* shelf = new BookShelf();
    shelf->displayBooks();
    cout << "\n~~~~End of Program~~~~\n";
    delete shelf; // cleanup
    return 0;
}