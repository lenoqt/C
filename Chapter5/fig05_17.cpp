// fig05_17.cpp 
// Recursive function fibonacci.
#include <iostream>
using namespace std;

long fibonacci(long number); // function prototype

int main() {
   // calculate the fibonacci values of 0 through 10
   for (int counter{0}; counter <= 10; ++counter)
      cout << "Fibonacci(" << counter << ") = "
         << fibonacci(counter) << endl;

   // display higher fibonacci values
   cout << "\nFibonacci(20) = " << fibonacci(20) << endl;
   cout << "Fibonacci(30) = " << fibonacci(30) << endl;
   cout << "Fibonacci(35) = " << fibonacci(35) << endl;
}

// recursive function fibonacci
long fibonacci(long number) {
   if ((0 == number) || (1 == number)) { // base cases
      return number;
   }
   else { // recursion step
      return fibonacci(number - 1) + fibonacci(number - 2);
   }
}
