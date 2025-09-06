#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int &b = a; // b is a reference to a
    cout << "a: " << a << ", b: " << b << endl;

    b = 20; // changing b also changes a
    cout << "a: " << a << ", b: " << b << endl;

    return 0;
}