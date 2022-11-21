#include <iostream>
#include <string>

#include "enums.cpp"

class Date {
   public:
    // error report
    /*
    class Invalid {
    };
    */

    // constructors
    Date();
    Date(int year, int month, int day);

    // destructor
    //~Date();

    // get func
    int get_year() const;          // get date year
    int get_month() const;         // get date month
    int get_day() const;           // get date day
    std::string get_date() const;  // get date

    bool is_leap() const;  // check if the year is leap
    bool check_date(int x, int max, int min);  //helper function used to check if x is between min and max
    bool is_valid();    //check if the date received is valid

    friend std::ostream& operator<<(std::ostream& os, const Date& date); //overload of ostream "<<" operator to output the date

   private:
    int year;
    Month month;
    int day;
};