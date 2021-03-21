// fig07_08.cpp
// Attempting to modify a constant pointer to non-constant data

int main() {
    int x, y;

    // ptr is a constant pointer to an integer that can be modified
    // through ptr, but ptr always points to the same memory location
    int* const ptr{&x}; // const pointer must be initialized

    *ptr = 7; // allowed: *ptr is not const
    ptr = &y; // error: ptr is a const; cannot assign to it a new address
}
