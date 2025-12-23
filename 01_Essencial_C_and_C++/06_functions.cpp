#include <iostream>
using namespace std;

// Function to calculate the max of two integers
int max(int a, int b)
{
    return (a > b) ? a : b; // Ternary operator to return the maximum
}

// Main function
int main()
{
    // Variables to hold the numbers and the result
    int num1, num2, maximum;
    num1 = 10;
    num2 = 20;

    // Calling the max function and storing the result
    maximum = max(num1, num2);

    cout << "The maximum of " << num1 << " and " << num2 << " is: " << maximum << endl;

    return 0;
}