// fig07_01.cpp
// pointer operators & and *
#include <iostream>
using namespace std;

int main() {
    constexpr int a{7}; // initialize a with a 7
    const int* aPtr = &a; // initialize aPtr with address of a int variable a

    cout << "The address of a is " << &a
        << "\nThe value of aPtr is " << aPtr;
    cout << "\n\nTheThe value of a is " << a
        << "\nThe value of *aPtr is " << *aPtr << endl;
}
