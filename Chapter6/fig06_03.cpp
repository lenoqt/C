// fig06_03.cpp
// Using range-based for.
#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> items{1, 2, 3, 4, 5}; // list initializer

    // display items before modification
    cout << "items before modification: ";
    for (const int item : items) {
        cout << item << " ";
    }

    // multiply the elements of items by 2
    for (int& itemRef : items) { // itemRef is a reference to a int
        itemRef *=2;
    }

    // display items after modification
    cout << "\nitems after modification: ";
    for (const int item : items) {
        cout << item << " ";
    }

    // total elements of items using range-based for with initialization
    cout << "\n\ncalculating a running total of items' values: ";
    for (int runningTotal{0}; const int item : items) {
        runningTotal += item;
        cout << "\nitem: " << item << "; running total: " << runningTotal;
    } 

    cout << endl;
}
