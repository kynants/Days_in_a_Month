// Write a program that asks the user to enter the month (letting the user
// enter an integer in the range of 1 through 12) and the year. The program
// should then display the number of days in that month. Use the following
// criteria to identify leap years:
//
// 1. Determine whether the year is divisible by 100. If it is, then it is a
//    leap year if and only if it is divisible by 400. For example, 2000 is a
//    leap year but 2100 is not.
//
// 2. If the year is not divisible by 100, then it is a leap year if and if
//    only it is divisible by 4. For example, 2008 is a leap year but 2009 is
//    not. Here is a sample run of the program
//
// Enter a month (1-12): 2 [Enter]
// Enter a year: 2008 [Enter]
// 29 days

#include <iostream>
using namespace std;

int main() {
    int month,
        year;

    // Prompt to enter month number
    cout << "Enter a month (1-12): ";
    cin >> month;

    // Prompt to enter year
    cout << "Enter the year: ";
    cin >> year;
    int leap_100 = year % 100,
        leap_400 = year % 400,
        leap_4 = year % 4;

    // Leap year if the year is divisible by 100 and 400
    if (leap_100 == 0 && leap_400 == 0)
    {
        if (month == 1 ||
            month == 3 ||
            month == 5 ||
            month == 7 ||
            month == 8 ||
            month == 10 ||
            month == 12) {
            cout << "31 days";
        } else if (month == 4 ||
                   month == 6 ||
                   month == 9 ||
                   month == 11) {
            cout << "30 days";
        } else {
            cout << "29 days";
        }

      // If the year is not divisible by 100 and 400
      // Check if it's a leap year if the year is divisible by 4
    } else if (leap_4 == 0) {
        if (month == 1 ||
            month == 3 ||
            month == 5 ||
            month == 7 ||
            month == 8 ||
            month == 10 ||
            month == 12) {
            cout << "31 days";
        } else if (month == 4 ||
                   month == 6 ||
                   month == 9 ||
                   month == 11) {
            cout << "30 days";
        } else {
            cout << "29 days";
        }

      // If the year is not divisible by 100 and 400, or 4
      // Then it is not a leap year
    } else {
        if (month == 1 ||
            month == 3 ||
            month == 5 ||
            month == 7 ||
            month == 8 ||
            month == 10 ||
            month == 12) {
            cout << "31 days";
        } else if (month == 4 ||
                   month == 6 ||
                   month == 9 ||
                   month == 11) {
            cout << "30 days";
        } else {
            cout << "28 days";
        }
    }
    return 0;
}