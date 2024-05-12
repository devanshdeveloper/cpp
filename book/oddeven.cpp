#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number : " << endl;
    cin >> num;
    if (num == 0)
    {
        cout << "This is neither a even number nor a odd number." << endl;
    }

    else if ((num % 2) == 0)
    {
        cout << "This is a even number." << endl;
    }
    else
    {
        cout << "This is a odd number." << endl;
    }
    return 0;
}