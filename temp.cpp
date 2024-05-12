#include <iostream>
using namespace std;

const int MATRIX_SIZE = 4;

int main()
{
    int i, j, temp, a[MATRIX_SIZE][MATRIX_SIZE];
    cout << "Enter the matrix:" << endl;
    for (i = 0; i < MATRIX_SIZE; i++)
        for (j = 0; j < MATRIX_SIZE; j++)
            cin >> a[i][j];
    for (i = 0; i < MATRIX_SIZE; i++)
    {
        temp = a[0][i];
        a[0][i] = a[2][i];
        a[2][i] = temp;
    }
    cout << "After swapping first and third row, the matrix will be:" << endl;
    for (i = 0; i < MATRIX_SIZE; i++)
    {
        for (j = 0; j < MATRIX_SIZE; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}