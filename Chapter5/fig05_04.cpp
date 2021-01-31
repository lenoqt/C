// fig05_04.cpp 
// Randomizing the die-rolling program.
#include <iostream>
#include <iomanip>
#include <cstdlib> // contains prototypes for functions srand and rand
using namespace std;

int main() {
   int seed{0}; // stores the seedn entered by the user

   cout << "Enter seed: ";
   cin >> seed;
   srand(seed); // seed random number generator

   // loop 10 times 
   for (int counter{1}; counter <= 10; ++counter) {
      // pick random number from 1 to 6 and output it
      cout << (1 + rand() % 6) << " ";
   }

   cout << endl;
}
