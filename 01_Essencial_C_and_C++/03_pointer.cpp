#include <iostream>

using namespace std;

int main()
{
    int a = 10;  // Initialize a
    int *p = &a; // p points to a

    // Value demonstration
    cout << "Value of a: " << a << endl;             // a is 10
    cout << "Address of a: " << &a << endl;          // Instead of &a, we can use p
    cout << "Value of p: " << p << endl;             // p holds the address of a
    cout << "Value pointed to by p: " << *p << endl; // *p is a, which is 10

    p = new int[10]; // Dynamically allocate an array of 10 integers

    for (int i = 0; i < 10; i++)
    {
        p[i] = i * 10; // Initialize the array elements
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "Value at index " << i << ": " << p[i] << endl; // p[i] is the value at index i
    }

    // Don't forget to free the allocated memory
    delete[] p;
    return 0;
}