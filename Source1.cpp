#include <iostream>

const int MONTHS = 12;
const char* months[MONTHS] = { "January", "February", "March", "April",
                          "May", "June", "July", "August", "September",
                           "October", "November", "December" };
int main()
{
    using namespace std;  //introduces namespace std
    int sales[MONTHS];
    int month;

    cout << "Enter the monthly sales for \"C++ for Fools\":\n";
    for (month = 0; month < MONTHS; month++)
    {
        cout << "Sales for " << months[month] << ": ";
        cin >> sales[month];
    }

    double total = 0.0;
    for (month = 0; month < MONTHS; month++)
        total += sales[month];

    cout << "Total sales: " << total << endl;
    return 0;
}