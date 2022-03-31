#include <iostream>

using namespace std;

class Book {
private:
    char *title;
    int pages;
public:
    Book(const Book&);
    Book(const char *t, int p);
    Book();
    void print();
};



Book::Book() {
    title = "someone";
    pages = 15;
}

Book::Book(const Book& newBook){
    title = new char[strlen(newBook.title)];
    title = newBook.title;
    pages = newBook.pages;
}

void Book::print() {
    cout << title << endl;
    cout << pages << endl;
}

int main() {
    Book a;
    a.print();
    Book b(a);
    b.print();
    return 0;
}
