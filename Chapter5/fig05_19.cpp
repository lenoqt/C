// fig05_19.cpp
// C++ [[nodiscard]] attribute.

[[nodiscard]]
int cube(int x) {
   return x * x * x;
}

int main() {
   cube(10); // generates a compiler warning
}
