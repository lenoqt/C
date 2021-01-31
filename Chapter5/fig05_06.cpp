// fig05_06.cpp
// Using C++11 random-number generation engine and distribution 
// to roll a six-sided die more securely
#include <iostream>
#include <iomanip>
#include <random> // contains C++11 random number generation features
#include <ctime>
#include "gsl/gsl"
using namespace std;

int main() {
      // use the default random-number generation engine to
      // produce uniformly distributed pseudorandom int values from 1 to 6
      default_random_engine engine{gsl::narrow_cast   <unsigned int>(time(0))};
      uniform_int_distribution<int> randomInt{1, 6};

      // loop 10 times
      for (int counter{1}; counter <= 10; ++counter) {
           // pick random number from 1 to 6 and output it
           cout << randomInt(engine) << " ";
      }

      cout << endl;
}
