#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float radius, area, circum;
    cout << "\n\n Find the area and circumference of any circle :\n";
    cout << "----------------------------------------------------\n";
    cout << " Input the radius(1/2 of diameter) of a circle : ";
    cin >> radius;

    circum = 2 * M_PI * radius;
    area = M_PI * (radius * radius);
    cout << " The area of the circle is : " << area << endl;
    cout << " The circumference of the circle is : " << circum << endl;

    cout << endl;
    return 0;
}
