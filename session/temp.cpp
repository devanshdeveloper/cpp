#include <iostream>

using namespace std;

int main()
{
    int i;
    cout << "Enter  a number";
    if ((cin >> i))
    {
        cout << "i" << endl;
    }
    cout << i << endl
         << !i;
    return 0;
}