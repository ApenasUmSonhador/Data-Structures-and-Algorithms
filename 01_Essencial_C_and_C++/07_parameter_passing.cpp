#include <iostream>
using namespace std;

// Function to 'fake' swap two integers using pass by value
void swapByValue(int a, int b)
{
    int temp = a; // Store the value of 'a' in a temporary variable
    a = b;        // Assign the value of 'b' to 'a'
    b = temp;    // Assign the value of 'temp' (original 'a') to 'b'
}

// Function to swap two integers using pass by reference
void swapByReference(int &a, int &b)
{
    int temp = a; // Store the value of 'a' in a temporary variable
    a = b;        // Assign the value of 'b' to 'a'
    b = temp;    // Assign the value of 'temp' (original 'a') to 'b'
}

// Function to swap two integers using pass by address
void swapByAddress(int *a, int *b)
{
    int temp = *a; // Store the value pointed by 'a' in a temporary variable
    *a = *b;       // Assign the value pointed by 'b' to the location pointed by 'a'
    *b = temp;    // Assign the value of 'temp' (original value of 'a') to the location pointed by 'b'
}

// Main function
int main()
{
    int x = 10; // Initialize variable x
    int y = 20; // Initialize variable y

    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swapByValue(x, y); // Call the swap function

    cout << "After swap: x = " << x << ", y = " << y << endl; // Values remain unchanged
    // because pass by value creates copies of the arguments!

    swapByReference(x, y); // Call the swap function
    cout << "After swap by reference: x = " << x << ", y = " << y << endl; // Values are swapped
    // because pass by reference modifies the original variables!

    swapByAddress(&x, &y); // Call the swap function
    cout << "After swap by address: x = " << x << ", y = " << y << endl; // Values are swapped again
    // because pass by address modifies the original variables via pointers!

    return 0;
}