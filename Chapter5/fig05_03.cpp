// fig05_03.cpp
// Rolling a six-sided die 60,000,000 times.
#include <iostream>
#include <iomanip>
#include <cstdlib> // contains function prototype for rand
using namespace std;

int main() {
   int frequency1{0}; // count of 1s rolled
   int frequency2{0}; // count of 2s rolled
   int frequency3{0}; // count of 3s rolled
   int frequency4{0}; // count of 4s rolled
   int frequency5{0}; // count of 5s rolled
   int frequency6{0}; // count of 6s rolled

   // summarize results of 60,000,000 rolls of a die
   for (int roll{1}; roll <= 60'000'000; ++roll) {
      // determine roll value 1-6 and increment appropriate counter
      switch (const int face{1 + rand() % 6}; face) {
         case 1: // case are space sensitive case1 will have different behavior than case 1 which is the desired one
            ++frequency1; // increment the 1s counter
            break;
         case 2:
            ++frequency2; // increment the 2s counter
            break;
         case 3:
            ++frequency3; // increment the 3s counter
            break;
         case 4:
            ++frequency4; // increment the 4s counter
            break;
         case 5:
            ++frequency5; // increment the 5s counter
            break;
         case 6:
            ++frequency6; // increment the 6s counter
            break;
         default: // invalid value
            cout << "Program should never get here!";
      }
   }

   cout << "Face" << setw(13) << "Frequency" << endl; // output headers
   cout << "   1" << setw(13) << frequency1
      << "\n   2" << setw(13) << frequency2
      << "\n   3" << setw(13) << frequency3
      << "\n   4" << setw(13) << frequency4
      << "\n   5" << setw(13) << frequency5
      << "\n   6" << setw(13) << frequency6 << endl;
}
