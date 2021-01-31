// fig05_05.cpp
// Craps simulation.
// c++ -std=c++2a -I$HOME/dev/GSL/include fig05_05.cpp -o fig05_05 && ./fig05_05 for compiling
// make sure MS-GSL is installed from git or using vcpkg
#include <iostream>
#include <cstdlib> // contains prototypes for functions srand and rand
#include <ctime> // contains prototype for function time
#include <gsl/util> // for narrow_cast

using namespace std;

int rollDice(); // rolls dice, calculates and displays sum

int main() {
   // scoped enumeration with constants that represent the game status
   enum class Status {keepRolling, won, lost}; // all caps in constants

   // randomize random number generator using current time
   srand(gsl::narrow_cast<unsigned int>(time(0)));

   int myPoint{0}; // point if no win or loss on first roll
   Status gameStatus{Status::keepRolling}; // game is not over
   
   // determine game status and point (if needed) based on first roll
   switch (const int sumOfDice{rollDice()}; sumOfDice) {
      case 7: // win with 7 on first roll
      case 11: // win with 11 on first roll
         gameStatus = Status::won;
         break;
      case 2: // lose with 2 on first roll
      case 3: // lose with 3 on first roll
      case 12: // lose with 12 on first roll
         gameStatus = Status::lost;
         break;
      default: // did not win or lose, so remember point
         myPoint = sumOfDice; // remember the point
         cout << "Point is " << myPoint << endl;
         break; // optional at end of switch
   }

   // while game is not complete
   while (Status::keepRolling == gameStatus) { // not won or lost
      // roll dice again and determine game status
      if (const int sumOfDice{rollDice()}; sumOfDice == myPoint) {
         gameStatus = Status::won;
      }
      else {
         if (sumOfDice == 7) { // lose by rolling 7 before point
            gameStatus = Status::lost;
         }
      }
   }

   // display won or lost message
   if (Status::won == gameStatus) {
      cout << "Player wins" << endl;
   }
   else {
      cout << "Player loses" << endl;
   }
}

// roll dice calculate sum and display results
int rollDice() {
   const int die1{1 + rand() % 6}; // first die roll
   const int die2{1 + rand() % 6}; // second die roll
   const int sum{die1 + die2}; // compute sum of die values

   // display results of this roll
   cout << "Player rolled " << die1 << " + " << die2
      << " = " << sum << endl;
   return sum;
}
