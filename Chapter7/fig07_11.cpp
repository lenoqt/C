// fig07_11.cpp
// sizeof operator used to determine standard data type sizes.
#include <iostream>
using namespace std;

int main() {
    constexpr char c {}; // variable of type char
    constexpr short s{}; // variable of type short
    constexpr int i{}; // variable of type int
    constexpr long l{}; // variable of type long
    constexpr long long ll{};// variable of type long long
    constexpr float f{}; // variable of type float
    constexpr double d{}; // variable of type double
    constexpr long double ld{}; // variable ef type long double
    constexpr int array[20]{}; // built-in array of int
    const int* const ptr{array}; // variable of type int*

    cout << "sizeof c = " << sizeof c
        << "\tsizeof(char) = " << sizeof(char)
        << "\nsizeof s = " << sizeof s
        << "\tsizeof(short) = " << sizeof(short)
        << "\nsizeof i = " << sizeof i
        << "\tsizeof(int) = " << sizeof(int)
        << "\nsizeof l = " << sizeof l
        << "\tsizeof(long) = " << sizeof(long)
        << "\nsizeof ll = " << sizeof ll
        << "\tsizeof(long long) = " << sizeof(long long)
        << "\nsizeof f = " << sizeof f
        << "\tsizeof(float) = " << sizeof(float)
        << "\nsizeof d = " << sizeof d
        << "\tsizeof(double) = " << sizeof(double)
        << "\nsizeof ld = " << sizeof ld
        << "\tsizeof(long double) = " << sizeof(long double)
        << "\nsizeof array = " << sizeof array
        << "\nsizeof ptr = " << sizeof ptr << endl;
}
