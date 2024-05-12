#include <iostream>
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

class Array2D {
private:
    int arr[MAX_ROWS][MAX_COLS];
    int numRows;
    int numCols;

public:
    Array2D() {
        numRows = 0;
        numCols = 0;
    }

    void push(int value) {
        if (numRows < MAX_ROWS && numCols < MAX_COLS) {
            arr[numRows][numCols++] = value;
            if (numCols == MAX_COLS) {
                numRows++;
                numCols = 0;
            }
            cout << "PUSH: [" << numRows - 1 << "][" << numCols - 1 << "] => " << value << endl;
        } else {
            cout << "MAX SIZE REACHED" << endl;
        }
    }

    void display() {
        cout << "DISPLAY: " << endl;
        if (numRows == 0 && numCols == 0) {
            cout << "EMPTY" << endl;
            return;
        }
        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j < numCols; ++j) {
                cout << "[" << i << "][" << j << "] => " << arr[i][j] << endl;
            }
        }
    }

    void clear() {
        numRows = 0;
        numCols = 0;
        cout << "CLEAR: []" << endl;
    }
};

int main() {
    Array2D myArray;

    myArray.push(10);
    myArray.push(20);
    myArray.push(30);
    myArray.display();

    myArray.clear();
    myArray.display();

    return 0;
}
