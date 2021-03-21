// fig07_07.cpp
// Attempting to modify data through a
// nonconstant pointer to constant data.

int main() {
    int y{2};
    const int* yPtr{&y};
    *yPtr = 100; // error: cannot modify a const object
}
