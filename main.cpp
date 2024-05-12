#include <iostream>

using namespace std;

// classes
class Student
{
    string studentName = "Devansh";
    int marks[6] = {18, 19, 16, 15, 19, 20};
};

int main()
{
    // a single line comment

    /*
    a
    multi
    line
    comment
     */

    // print function
    cout << "hello world";

    // print in next line
    cout << "Fist line" << endl;
    cout << "Second line";

    // cout with a identifier
    // cout << "Fist line" << identifier;

    // rules for creating identifiers/variables
    // a identifier can start with a alphabet or a underscore

    // valid
    int a = 1;
    int _num = 2;

    // invalid
    // int 1a = 2;

    // it is preferred to use camelCase notation
    int studentMarks = 98;

    // constant identifier
    int const pie = 3.14;

    // changing the value of constant identifier will throw an error, that you can't change its value
    // pie = 3.145;

    /*
    Data Types in C++

    1. Primitive Data Types
    Name                    keyword     Range     size
    Integer                 int
    Character               char
    Boolean                 bool
    Floating Point          float
    Double Floating Point   double
    Valueless or Void       void
    Wide Character          wchar_t



    */

    // take a number as a input
    int num;
    cout << "Enter a number : " << endl;
    cin >> num;

    // typecasting
    // typecasting means converting a value from one data type to another data type
    // this is will convert num from integer to float
    num = (float)num;

    /*
    Operators in C++
    */

    /*
    if-else conditional
    if (condition)
    {
         code
    }
    else if
    {
        fallback code
    }
    else
    {
        last fallback code
    }

    */

    /*
    switch statement

   switch (expression)
   {
   case  possible-value :
        code
        break;
   case  another-possible-value :
        code
        break;

   default:
        default code to run
         break;
   }
    */

    // loops
    // this will print from 1 to 10 counting
    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << endl;
    }

    /*
    functions
    syntax of a function statemnt

    return-type function-name (parameter-type parameter-name) {
        code;
        return something
    }

    function call
    add(20,10);

     function example
     int add(int a, int b)
     {
         int c;
         c = a + b;
         return c;
     };
    */

    /*
    arrays

    syntax of initizing a array
    element-type identifier[array-length] = { values, seperated, by, commas };

    accesing a value by index of element
    cout << identifier[index];

    creating a 2D array
    int arr[2][3] = {
        {1, 2, 3}.
        {4, 5, 6}.
        {7, 8, 9}.
    }

    Note : writing array length is not mandatory
    */

    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // indexes      0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    cout << nums[1]; // 2

    // strings

    // assigning a string
    string name = "Devansh";

    // String Methods
    cout << "The name is " << name << endl;
    cout << "The length of name is " << name.length() << endl;
    cout << "The nickname is " << name.substr(0, 2) << endl;

    // pointers
    int age = 18;
    int *addressOfAge = &age;
    cout << addressOfAge;

    // access the value from pointer
    cout << *addressOfAge;



    Student devansh;

    cout << sizeof(devansh);
    return 0;
};