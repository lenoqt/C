// fig04_02.cpp
// Counter-controlled iteration with the for iteration statement.
#include <iostream>
using namespace std;

int main() {
   // for statement header includes initialization,
   // loop-continuation condition and increment
   for (int counter{1}; counter <= 10; ++counter) { // for (init; loopContinuationCondition; increment) { statement }
      cout << counter << " ";
   }

   cout << endl;
}
