// fig07_06.cpp
// C++20: Creating std::arrays with to_array
#include <iostream>
#include <array>
using namespace std;

int main() {
    // lambda to display a collection of items
    const auto display = [](const auto& items) {
        for (const auto& item : items) {
            cout << item << " ";
        }
    };

    const int values1[3]{10, 20, 30};

    // creating a std::array from a built-in array
    const auto array1 = to_array(values1);

    cout << "array1.size() = " << array1.size() << "\narray1: ";
    display(array1); // use lambda to display

    // creating a std::array from an initializer list
    const auto array2 = to_array({1, 2, 3, 4});
    cout << "\n\nnarray2.size() = " << array2.size() << "\nnarray2: ";
    display(array2); // use lambda to display contents
    cout << endl;
}
