// fig06_11.cpp
// Compute the sum of the elements of an array
#include <array>
#include <iostream>
#include <numeric>
using namespace std;

int main() {
    constexpr size_t arraySize{4};
    array<int, arraySize> integers{10, 20, 30, 40};
    cout << "Total of array elements: " <<
        accumulate(begin(integers), end(integers), 0) << endl;
}
