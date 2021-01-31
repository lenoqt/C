// fig05_02.cpp
// Shifted, scaled integers produced by 1 + rand() % 6.
#include <iostream>
#include <cstdlib> // contains function prototype for rand
using namespace std;

int main() {
   for (int counter{1}; counter <= 10; ++ counter) {
      // pick random number from 1 to 6 and output it
      cout << (1 + rand () %6) << " ";
   }
   
   cout << endl;

}
