#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Element " << i << ": " << arr[i] << endl;
    }
}

int main() {
    const int size = 5;
    int arr[size] = {10, 20, 30, 40, 50};

    // Note: We pass the array name which decays to a pointer to the first element
    // arrays are always passed by pointer in C/C++
    printArray(arr, size);
    

    return 0;
}