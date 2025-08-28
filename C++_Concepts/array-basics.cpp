#include <iostream>

using namespace std;

int main()
{
    // Just declaring:
    int myArray[10]; // Array of 10 integers, each integer has 4 bytes, uninitialized

    // Seeing the size in bytes:
    cout << "Size of myArray: " << sizeof(myArray) << " bytes" << endl;

    // Initializing:
    for (int i = 0; i < 10; i++)
    {
        myArray[i] = i * 10; // Assigning values
    }

    // Accessing:
    for (int i = 0; i < 10; i++)
    {
        cout << "Element at index " << i << ": " << myArray[i] << endl;
    }

    // Declaring and initializing a new array
    int anotherArray[5] = {1, 2, 3, 4, 5};

    // Accessing elements of the new array
    for (int i = 0; i < 5; i++)
    {
        cout << "Element at index " << i << ": " << anotherArray[i] << endl;
    }

    return 0;
}