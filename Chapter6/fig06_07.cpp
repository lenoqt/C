// fig06_07.cpp
// Die-rolling program using an array instead of switch.
#include "fmt/format.h" // C++20: This will be #include <format>
#include <iostream>
#include <array>
#include <random>
#include <ctime>
#include <gsl/gsl>
using namespace std;

int main() {
    // use the default random-number generation engine to
    // produce uniformly distributed pseudorandom int values from 1 to 6
    default_random_engine engine(gsl::narrow_cast<unsigned int>(time(0)));
    uniform_int_distribution<int> randomInt(1, 6);

    constexpr size_t arraySize{7}; // ignore the zero element
    array<int, arraySize> frequency{}; // initialize to 0s

    // roll die 60,000,000 times; use die values as frequency index
    for (int roll{1}; roll <= 60'000'000; ++roll) {
        ++frequency.at(randomInt(engine));
    }

    cout << fmt::format("{}{:>13}\n", "Face", "Frequency");

    // output each array element's value
    for (size_t face{1}; face < frequency.size(); ++face) {
        cout << fmt::format("{:>4}{:>13}\n", face, frequency.at(face));
    }
}

// TODO: Fix the fucking compiler with GSL
