#include <iostream>
using namespace std;

// Function to perform binary search on a sorted array
int binarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        cout << left << " " << right << " " << mid   << endl;

        // Check if the target is present at the middle
        if (arr[mid] == target)
        {
            return mid;
        }
        // If target is greater, ignore left half
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        // If target is smaller, ignore right half
        else
        {
            right = mid - 1;
        }
    }
    // If the target is not found in the array
    return -1;
}

int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    // Perform binary search
    int result = binarySearch(arr, size, target);

    if (result != -1)
    {
        cout << "Element " << target << " found at index " << result << "." << endl;
    }
    else
    {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}
