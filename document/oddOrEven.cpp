// g++ ./oddOrEven.cpp -o oddOrEven ; ./oddOrEven.exe

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    if (num % 2 == 0) // if remainder is zero then even number
        cout << num << " number is even";
    else
        cout << num << " number is odd";
    return 0;
}
