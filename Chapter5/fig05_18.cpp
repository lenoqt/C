// fig05_18.cpp
// Iterative function factorial.
#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial(int number); // function prototype

int main() {
   // calculate the factorials of 0 through 10
   for (int counter{0}; counter <= 10; ++counter) {
      cout << setw(2) << counter << "! = " << factorial(counter)
         << endl;
   }
}

// iterative function factorial
unsigned long factorial(int number) {
   unsigned long result{1};

   // iterative factorial calculation
   for (int i{number}; i >= 1; --i) {
      result *= i;
   }
   return result;

}
