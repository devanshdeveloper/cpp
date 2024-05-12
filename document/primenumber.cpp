#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 2;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
            break;
    }
    if (i == n)
        cout << "Prime";
    else
        cout << "Not a prime";
    return 0;
}