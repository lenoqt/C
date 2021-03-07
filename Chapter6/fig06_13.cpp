// fig_06_13.cpp
// Functional-style programming with C++20 ranges and views.
#include <array>
#include <iostream>
#include <numeric>
#include <ranges>
using namespace std;

int main() {
    // lambda to display results of range operations
    auto showValues = [](auto& values, const string& message) {
        cout << message << ": ";

        for (auto value : values) {
            cout << value << " ";
        }

        cout << endl;
    };
}
