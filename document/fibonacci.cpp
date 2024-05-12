#include <iostream>

using namespace std;

int main()
{
    int n1 = 0, n2 = 1, sum, number;
    cout << "Enter the number of elements: ";
    cin >> number;
    cout << n1 << " " << n2 << " "; // printing 0 and 1
    for (int i = 2; i < number; ++i)    // loop starts from 2 because 0 and 1 are already printed
    {
        sum = n1 + n2;
        cout << sum << " ";
        n1 = n2;
        n2 = sum;
    }
    return 0;
}
