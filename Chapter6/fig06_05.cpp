// fig06_05.cpp
// Compute the sum of the elements of an array.

#include <iostream>
#include <array>
using namespace std;

int main() {
    constexpr size_t arraySize{4};
    array<int, arraySize> integers{10, 20, 30, 40};
    int total {0};

    // sum contents of array a
    for (const int item: integers) {
        total += item;
    }

    cout << "Total of array elements: " << total << endl;
}
