// fig07_03.cpp
// pass-by-reference with a pointer argument used to cube a
// variable's value
#include <iostream>
using namespace std;

void cubeByReference(int* nPtr); // prototype

int main () {
    int number{5};

    cout << "The original value of number is " << number;
    cubeByReference(&number); // pass number address to cubeByReference
    cout << "\nThe new value of number is " << number << endl;
}

// calculate cube of *nPtr; modifies variable number in main
void cubeByReference(int* nPtr) {
    *nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr
}
