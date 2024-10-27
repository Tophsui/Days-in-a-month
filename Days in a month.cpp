#include <iostream>
using namespace std;

// Function to determine if a year is a leap year
bool isLeapYear(int year) {
    if (year % 100 == 0) {
        return year % 400 == 0;  // Divisible by 400
    }
    else {
        return year % 4 == 0;     // Divisible by 4
    }
}

// Function to get the number of days in a month
int daysInMonth(int month, int year) {
    // Number of days in each month
    int monthDays[] = { 31, 28, 31, 30, 31, 30,
                       31, 31, 30, 31, 30, 31 };

    // Adjust for leap year if the month is February
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    else {
        return monthDays[month - 1];  // month - 1 for zero-based index
    }
}

int main() {
    int month, year;

    // Get user input
    cout << "Enter a month (1–12): ";
    cin >> month;

    cout << "Enter a year: ";
    cin >> year;

    // Validate the month
    if (month >= 1 && month <= 12) {
        int days = daysInMonth(month, year);
        cout << days << " days" << endl;
    }
    else {
        cout << "Please enter a valid month (1–12)." << endl;
    }

    return 0;
}
