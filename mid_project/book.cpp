#include "book.h"

Book::Book()
    : isbn{"n-n-n-x"}, title{"dummy"}, auth_name{"dummy"},
      auth_surname{"dummy"}, date{0}, available{true}
{
}

Book::Book(string isbn, string title, string auth_name,
           string auth_surname, int date, bool available)
    : isbn{isbn}, title{title}, auth_name{auth_name},
      auth_surname{auth_surname}, date{date}, available{available}
{
}

string Book::get_isbn()
{
    return isbn;
}

string Book::get_title()
{
    return title;
}

string Book::get_auth_name()
{
    return auth_name;
}

string Book::get_auth_surname()
{
    return auth_surname;
}

int Book::get_date()
{
    return date;
}

bool Book::is_available()
{
    return available;
}