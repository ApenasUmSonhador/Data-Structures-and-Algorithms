#include <iostream>

using namespace std;

// Define a structure named rectangle
struct rectangle
{
    // Define the members of the structure
    int length;
    int breadth;
};

int main()
{
    rectangle r1; // Declare a variable of type rectangle, uninitialized

    // Calculating the size of an rectangle: Should be 8 bytes (4 bytes for each int)
    cout << "Size of rectangle: " << sizeof(r1) << " bytes" << endl;

    // Assign values to the members of the structure
    r1.length = 10;
    r1.breadth = 5;

    // Access and print the values of the members
    cout << "Length: " << r1.length << endl;
    cout << "Breadth: " << r1.breadth << endl;

    // Calculate and print the area of the rectangle
    int area = r1.length * r1.breadth;
    cout << "Area: " << area << endl;

    rectangle r2 = {20, 10}; // Declare and initialize another rectangle

    // Access and print the values of the members of r2
    cout << "Length: " << r2.length << endl;
    cout << "Breadth: " << r2.breadth << endl;

    // Calculate and print the area of the rectangle
    area = r2.length * r2.breadth;
    cout << "Area: " << area << endl;

    return 0;
}