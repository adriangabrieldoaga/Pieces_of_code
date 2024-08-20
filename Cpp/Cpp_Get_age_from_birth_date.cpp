// C++ program to get age in years, months and days from birth date (including
// the date of today)

#include <iostream>
#include <ctime>

using std::cout;
using std::cin;

int main()
{
    // Get current time
    time_t t = time(0);
    tm* now = localtime(&t);
    // Current date: day/month/year
    int current_day = now->tm_mday;
    int current_month = now->tm_mon + 1;
    int current_year = now->tm_year + 1900;

    int day_of_birth, month_of_birth, year_of_birth;

    cout << "Day of birth: ";
    cin >> day_of_birth;
    cout << "Month of birth: ";
    cin >> month_of_birth;
    cout << "Year of birth: ";
    cin >> year_of_birth;

    // Days of each month
    int days_each_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (day_of_birth > current_day)
    {
        current_day = current_day + days_each_month[month_of_birth - 1];
        current_month = current_month - 1;
    }
    if (month_of_birth > current_month)
    {
        current_year = current_year - 1;
        current_month = current_month + 12;
    }
    int calculated_days = current_day - day_of_birth;
    int calculated_months = current_month - month_of_birth;
    int calculated_years = current_year - year_of_birth;

    cout << "\nThe age is:\n"
         << "Years: " << calculated_years << "\n"
         << "Months: " << calculated_months << "\n"
         << "Days: " << calculated_days << "\n"
         << "Including the date of today\n";

    return 0;
}
