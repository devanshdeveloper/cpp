#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Array
{
private:
    int arr[MAX_SIZE];
    int size;

public:
    Array()
    {
        size = 0;
    }

    int *address(int index)
    {
        if (index >= 0 && index < size)
        {
            cout << "ADDRESS: " << index << " => " << arr[index] << " => " << &arr[index] << endl;
        }
        else
        {
            cout << "Invalid index. Returning nullptr." << endl;
            return nullptr;
        }
    }

    void push(int value)
    {
        if (size < MAX_SIZE)
        {
            arr[size++] = value;
            cout << "PUSH: " << size - 1 << " => " << value << endl;
        }
        else
        {
            cout << "MAX SIZE REACHED" << endl;
        }
    }

    void insert(int index, int value)
    {
        if (index >= 0 && index <= size && size < MAX_SIZE)
        {
            for (int i = size; i > index; --i)
            {
                arr[i] = arr[i - 1];
            }
            arr[index] = value;
            size++;
            cout << "INSERT: " << index << " => " << value << endl;
        }
        else if (size >= MAX_SIZE)
        {
            cout << "MAX SIZE REACHED" << endl;
        }
        else
        {
            cout << "INVALID INDEX" << endl;
        }
    }

    void display()
    {
        cout << "DISPLAY: " << endl;
        if (size == 0)
        {
            cout << "EMPTY" << endl;
            return;
        }
        for (int i = 0; i < size; ++i)
        {
            cout << i << " => " << arr[i] << endl;
        }
    }

    void update(int index, int newValue)
    {
        if (index >= 0 && index < size)
        {
            arr[index] = newValue;
            cout << "UPDATE: " << index << " => " << arr[index] << endl;
        }
        else
        {
            cout << "INVALID INDEX" << endl;
        }
    }

    void remove(int index)
    {
        int valueToRemove = arr[index];
        if (index >= 0 && index < size)
        {
            for (int i = index; i < size - 1; ++i)
            {
                arr[i] = arr[i + 1];
            }
            size--;
            cout << "DELETE: " << index << " => " << valueToRemove << endl;
        }
        else
        {
            cout << "INVALID INDEX" << endl;
        }
    }

    int search(int value)
    {
        for (int i = 0; i < size; ++i)
        {
            if (arr[i] == value)
            {
                cout << "SEARCH: " << i << " => " << value << endl;
                return i;
            }
        }
        cout << "SEARCH: NO ELEMENT FOUND" << endl;
        return -1;
    }

    void clear()
    {
        size = 0;
        cout << "CLEAR: []" << endl;
    }
};

int main()
{
    Array myArray;

    myArray.push(10);
    myArray.push(20);
    myArray.push(30);
    myArray.display();

    myArray.insert(1, 25);
    myArray.display();

    myArray.update(1, 50);
    myArray.display();

    myArray.remove(0);
    myArray.display();

    myArray.search(50);
    myArray.address(2);

    myArray.clear();
    myArray.display();

    return 0;
}
