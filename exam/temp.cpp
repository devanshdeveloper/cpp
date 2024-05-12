#include <iostream>
using namespace std;

class Employee
{
    int id, age;
    char Name[25];
    long salary;

public:
    void GetData()
    {
        cout << "Enter employee id: ";
        cin >> id;
        cout << "Enter employee name: ";
        cin.ignore(); // Clear the newline character left in the buffer
        cin.getline(Name, 25);
        cout << "Enter employee age: ";
        cin >> age;
        cout << "Enter employee salary: ";
        cin >> salary;
    }

    void PutData()
    {
        cout << "ID: " << id << "\tName: " << Name << "\tAge: " << age << "\tSalary: " << salary << endl;
    }
};

int main()
{
    int i;
    Employee E[3];

    for (i = 0; i < 3; i++)
    {
        cout << "Enter details of employee " << (i + 1) << ":" << endl;
        E[i].GetData();
    }

    cout << "Employee Details:" << endl;
    for (i = 0; i < 3; i++)
    {
        E[i].PutData();
    }

    return 0;
}
