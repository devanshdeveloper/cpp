#include <iostream>
using namespace std;
int main()
{
    int factorial = 1, number;
    cout << "Enter any Number: ";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }
    cout << "Factorial of " << number << " is: " << factorial << endl;
    return 0;
}
