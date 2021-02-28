// fig06_06.cpp
// Printing student grade distribution as a primitive bar chart
#include <iostream>
#include <array>
using namespace std;

int main() {
    constexpr size_t arraySize{11};
    array<int, arraySize> n{0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1};

    cout << "Grade distribution:" << endl;

    // for each element of array n, output a bar of the chart
    for (int i{0}; const int item : n) { // store number of grades inside array as n
    // output bar labels ("0-9:", ..., "90-99", "100:")
    if (0 == i) { // lower band of graph
        cout << "  0-9: ";
    }
    else if (10 == i) { //upper band of graph
        cout << "  100: ";
    }
    else { // range band of 1 - 9 bands
        cout << i * 10 << "-" << (i * 10) + 9 << ": ";
    }
    ++i;

    // print bar of asterisks
    for (int stars{0}; stars < item; ++stars) {
        cout << '*';
    }

    cout << endl; // starts a new line of output
    }
}
