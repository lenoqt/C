// fig06_08.cpp
// Poll analysis program.
#include "fmt/format.h"
#include <iostream>
#include <array>
using namespace std;

int main() {
    // define array sizes
    constexpr size_t responseSize{20}; // size of array responses
    constexpr size_t frequencySize{6}; // size of array frequency

    // place survey responses in array responses
    const array<int, responseSize> responses{
        1, 2, 5, 4, 3, 5, 2, 1, 3, 1, 4, 3, 3, 3, 2, 3, 3, 2, 2, 5};

    // initialize frequency counters to 0
    array<int, frequencySize> frequency{};

    // for each answer, select responses element and use that value
    // as frequency index to determine element to increment
    for (size_t answer{0}; answer < responses.size(); ++answer) {
        ++frequency.at(responses.at(answer));
    }

    cout << fmt::format("{}{:>12}\n", "Rating", "Frequency");

    // output each array element's value
    for (size_t rating{1}; rating < frequency.size(); ++rating) {
        cout << fmt::format("{:>6}{:>12}\n", rating, frequency.at(rating));
    }
}
