// fig_06_12.cpp
// Compute the product of an array's elemento using accumulate.
#include <array>
#include <iostream>
#include <numeric>
using namespace std;

int multiply(int x, int y) {
    return x * y;
}

int main() {
    constexpr size_t arraySize{5};
    array<int, arraySize> integers{1, 2, 3, 4, 5};

    cout << "Product of integers: "
        << accumulate(begin(integers), end(integers), 1, multiply) << endl;

    cout << "Product of integers with lambda: "
        << accumulate(begin(integers), end(integers), 1,
                [](const auto& x, const auto& y){return x * y;}) << endl; // auto enables the compiler to infer the type
                // lambda begins with a lambda introducer [], followed by
                // a comma-separated parameter list and a function body
                // [](parameter list){return function body;}
}
