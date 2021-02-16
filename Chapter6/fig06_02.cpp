// fig06_02.cpp
// Initializing an array in a declaration.
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main() {
    array<int, 5> n{32, 27, 64, 18, 18}; // list initializer

    // output each array element's value
    for (size_t i{0}; i < n.size(); ++i) {
        cout << n.at(i) << " ";
    }

    cout << endl;
}
