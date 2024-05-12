#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int year;
    cout << "Enter a year : ";
    cin >> year;

    if (year <= 0)
    {
        cout << "Year must be a positive number." << endl;
        return 1;
    }

    if (year % 4 == 0)
    {
        cout << "Year is a leap year" << endl;
    }
    else
    {
        cout << "Year is not a leap year" << endl;
    }

    return 0;
}
