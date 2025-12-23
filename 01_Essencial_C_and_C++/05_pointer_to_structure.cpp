#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r = {10, 5}; // Initialize structure
    struct Rectangle *p = &r;     // Pointer to structure

    cout << "Length: " << (*p).length << endl; // Accessing members using dereferencing
    cout << "Breadth: " << p->breadth << endl; // Accessing members using arrow operator

    // Modifying values using pointer
    (*p).length = 15;
    p->breadth = 10;

    cout << "Modified Length: " << r.length << endl;
    cout << "Modified Breadth: " << r.breadth << endl;

    struct Rectangle *ptr;
    ptr = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // Allocating memory for structure
    ptr->length = 10;
    ptr->breadth = 5;

    cout << "Dynamically Allocated Rectangle Length: " << ptr->length << endl;
    cout << "Dynamically Allocated Rectangle Breadth: " << ptr->breadth << endl;

    free(ptr); // Freeing allocated memory with free()

    ptr = new Rectangle(); // Allocating memory using new operator
    ptr->length = 20;
    ptr->breadth = 15;

    cout << "Dynamically Allocated Rectangle Length (new): " << ptr->length << endl;
    cout << "Dynamically Allocated Rectangle Breadth (new): " << ptr->breadth << endl;

    delete ptr; // Freeing allocated memory with delete

    return 0;
}