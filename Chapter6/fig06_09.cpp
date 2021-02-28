// fig06_09.cpp
// Sorting and searching arrays.
#include <iostream>
#include <array>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    constexpr size_t arraySize{7}; // size of array colors
    array<string, arraySize> colors{"red", "orange", "yellow",
    "green", "blue", "indigo", "violet"};

    // output original array
    cout << "Unsorted colors array:\n";
    for (string color : colors) {
        cout << color << " ";
    }

    sort(begin(colors), end(colors)); // sort contents of colors

    // output sorted array
    cout << "\nSorted colors array:\n";
    for (string item : colors) {
        cout << item << " ";
    }

    // search for "indigo" in colors
    bool found{binary_search(begin(colors), end(colors), "indigo")};
    cout << "\n\n\"indigo\" " << (found ? "was" : "was not")
        << " found in colors array" << endl;
}
