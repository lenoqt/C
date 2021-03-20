// fig07_02.cpp
// pass-by-value used to cube a variable's value
#include <iostream>
using namespace std;

int cubeByValue(int n); // prototype

int main() {
    int number{5};

    cout << "The original value of number is " << number;
    number = cubeByValue(number); // pass number by value to cubeByValue
    cout << "\nThe new value of number is " << number << endl;
}

// calculate and return cube of integer argument
int cubeByValue(int n) {
    return n * n * n; // cube local variable n and return result
}
