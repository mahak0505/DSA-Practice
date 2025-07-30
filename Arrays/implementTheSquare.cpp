// Q.8 Write a program to demonstrate the use of (implement the square() function 
// discussed in class) 
// • Pass by Value 
// • Pass by Reference - using reference variable 
// • Pass by Reference - using Pointer variable

#include <iostream>
using namespace std;

void squareByValue(int n) {
    n = n * n;
    cout << "Inside squareByValue (squared): " << n << endl;
}
 
void squareByReference(int& n) {
    n = n * n;
    cout << "Inside squareByReference (squared): " << n << endl;
}
 
void squareByPointer(int* n) {
    *n = (*n) * (*n);
    cout << "Inside squareByPointer (squared): " << *n << endl;
}

int main() {
    int a = 5, b = 5, c = 5;

    cout << "Original values: a=" << a << ", b=" << b << ", c=" << c << endl;

    squareByValue(a);        // Pass by value - a will remain unchanged
    cout << "After squareByValue: a = " << a << endl;

    squareByReference(b);    // Pass by reference - b will be modified
    cout << "After squareByReference: b = " << b << endl;

    squareByPointer(&c);     // Pass by pointer - c will be modified
    cout << "After squareByPointer: c = " << c << endl;

    return 0;
}
