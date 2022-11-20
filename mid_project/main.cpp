#include <iostream>

#include "book.h"

int main() {
    std::vector<Book> shelf(10);  // book vector

    Book book1("David", "Foster Wallace", "Una cosa divertente che non farò mai più", "878-521-837-4");  // default book
    Book book2("Elia", "Mirafiori", "C++ fatto easy", "888-521-837-E");                                  // should be equal
    Book book3("Elia", "Mirafiori", "C++ fatto easy", "888-521-837-E");                                  // should be equal

    Book book4("Davide", "Mirafiori", "C++ fatto easy", "a88-521-837-E");   // should give invalid isbn
    Book book5("Alberto", "Mirafiori", "C++ fatto easy", "988-521-837-+");  // should give invalid isbn

    Book book6("Elia", "Mirafiori", "C++ fatto easy", "888-521-321-E");  // test borrow and return book
    Book book7("Elia", "Mirafiori", "C++ fatto easy", "888-521-123-E");  // test borrow and return book

    std::cout << "(book1 == book2) -> " << (book1 == book2) << std::endl;
    std::cout << "(book2 == book3) -> " << (book2 == book3) << std::endl;
    std::cout << "book2 -> " << book2;
    std::cout << "book3 check isbn -> " << book3.check_isbn();
    std::cout << "book4 check isbn -> " << book4.check_isbn();
    std::cout << "book5 check isbn -> " << book5.check_isbn();

    return 0;
}