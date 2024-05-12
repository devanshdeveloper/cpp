#include <iostream>

// g++ patterns.cpp ; ./a.exe

using namespace std;

void sqaurePattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void rectanglePattern(int l, int b)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void numericSqaurePattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

void alphabeticSqaurePattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << (char)(j + 65) << " ";
        }
        cout << endl;
    }
}
void trianglePattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (i + 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void flippedTrianglePattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void numericTrianglePattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (i + 1); j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}
void binaryTrianglePattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (i + 1); j++)
        {
            if ((i + j) % 2 == 0)
                cout << 0;
            else
                cout << 1;
        }
        cout << endl;
    }
}
void floydTrianglePattern(int n)
{
    int a = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (i + 1); j++)
        {
            cout << a++ << " ";
        }
        cout << endl;
    }
}
void oddNumericTrianglePattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (i + 1); j++)
        {
            cout << (2 * j) + 1 << " ";
        }
        cout << endl;
    }
}

void alphabeticTrianglePattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (i + 1); j++)
        {
            cout << (char)(j + 65) << " ";
        }
        cout << endl;
    }
}

void numericAlphabeticTrianglePattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (i + 1); j++)
        {
            if (i % 2 == 0)
                cout << (char)(j + 65);
            else
                cout << (j + 1);
        }
        cout << endl;
    }
}

void crossStarPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || (i + j) == (n - 1))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

void starPlusPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == n / 2) || (j == n / 2))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void hollowRectanglePattern(int l, int b)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i == 0 || j == 0 || i == (l - 1) || j == (b - 1))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main()
{
    int commandNumber;
    cout << "Enter 1 : * Square Pattern" << endl;
    cout << "Enter 2 : Numeric Square Pattern" << endl;
    cout << "Enter 3 : Alphabetic Square Pattern" << endl;
    cout << "Enter 4 : * Triange Pattern" << endl;
    cout << "Enter 5 : Numeric Triange Pattern" << endl;
    cout << "Enter 6 : Alphabetic Triange Pattern" << endl;
    cout << "Enter 7 : Numberic and Alphabetic Mix Triange Pattern" << endl;
    cout << "Enter 8 : Flipped Triange Pattern" << endl;
    cout << "Enter 9 : Odd Numeric Triange Pattern" << endl;
    cout << "Enter 10 : Floyd Triange Pattern" << endl;
    cout << "Enter 11 : Binary Triange Pattern" << endl;
    cout << "Enter 12 : * Rectanngle Pattern" << endl;
    cout << "Enter 13 : Star Plus Pattern" << endl;
    cout << "Enter 14 : Hollow Rectangle Pattern" << endl;
    cout << "Enter 15 : Star Cross Pattern" << endl;
    cin >> commandNumber;
    switch (commandNumber)
    {
    case 1:
        int sizeOfSqaure;
        cout << "Enter size of sqaure" << endl;
        cin >> sizeOfSqaure;
        sqaurePattern(sizeOfSqaure);
        break;

    case 2:
        int sizeOfNumericSqaure;
        cout << "Enter size of sqaure" << endl;
        cin >> sizeOfNumericSqaure;
        numericSqaurePattern(sizeOfNumericSqaure);
        break;

    case 3:
        int sizeOfAlphabeticSqaure;
        cout << "Enter size of sqaure" << endl;
        cin >> sizeOfAlphabeticSqaure;
        alphabeticSqaurePattern(sizeOfAlphabeticSqaure);
        break;

    case 4:
        int sizeOfTriangle;
        cout << "Enter size of Triangle" << endl;
        cin >> sizeOfTriangle;
        trianglePattern(sizeOfTriangle);
        break;

    case 5:
        int sizeOfNumericTriangle;
        cout << "Enter size of Triangle" << endl;
        cin >> sizeOfNumericTriangle;
        numericTrianglePattern(sizeOfNumericTriangle);
        break;

    case 6:
        int sizeOfAlphabeticTriangle;
        cout << "Enter size of Triangle" << endl;
        cin >> sizeOfAlphabeticTriangle;
        alphabeticTrianglePattern(sizeOfAlphabeticTriangle);
        break;

    case 7:
        int sizeOfNumericAlphabeticTriangle;
        cout << "Enter size of Triangle" << endl;
        cin >> sizeOfNumericAlphabeticTriangle;
        numericAlphabeticTrianglePattern(sizeOfNumericAlphabeticTriangle);
        break;

    case 8:
        int sizeOfFlippedTriangle;
        cout << "Enter size of Triangle" << endl;
        cin >> sizeOfFlippedTriangle;
        flippedTrianglePattern(sizeOfFlippedTriangle);
        break;

    case 9:
        int sizeOfOddNumericTriangle;
        cout << "Enter size of Triangle" << endl;
        cin >> sizeOfOddNumericTriangle;
        oddNumericTrianglePattern(sizeOfOddNumericTriangle);
        break;
    case 10:
        int sizeOfFloydTriangle;
        cout << "Enter size of Triangle" << endl;
        cin >> sizeOfFloydTriangle;
        floydTrianglePattern(sizeOfFloydTriangle);
        break;

    case 11:
        int sizeOfBinaryTriangle;
        cout << "Enter size of Triangle" << endl;
        cin >> sizeOfBinaryTriangle;
        binaryTrianglePattern(sizeOfBinaryTriangle);
        break;

    case 12:
        int length;
        int breath;
        cout << "Enter length of rectangle" << endl;
        cin >> length;
        cout << "Enter breath of rectangle" << endl;
        cin >> breath;
        rectanglePattern(length, breath);
        break;

    case 13:
        int sizeOfStarPlus;
        cout << "Enter size of Plus" << endl;
        cin >> sizeOfStarPlus;
        starPlusPattern(sizeOfStarPlus);
        break;

    case 14:
        int lengthOfHollowRectangle;
        int breathOfHollowRectangle;
        cout << "Enter length of rectangle" << endl;
        cin >> lengthOfHollowRectangle;
        cout << "Enter breath of rectangle" << endl;
        cin >> breathOfHollowRectangle;
        hollowRectanglePattern(lengthOfHollowRectangle, breathOfHollowRectangle);
        break;

    case 15:
        int sizeOfCrossStar;
        cout << "Enter size of Plus" << endl;
        cin >> sizeOfCrossStar;
        crossStarPattern(sizeOfCrossStar);
        break;

    default:
        cout << "Invalid";
        break;
    }
    return 0;
}