// fig04_12.cpp
// Compound-interest example with C++20 text formatting 
#include <iostream>
#include <cmath> // for pow function
#include <format.h> // in C++20, this will be #include <format>
using namespace std;
using namespace fmt; // not needed in C++20

int main() {
   double principal{1000.00}; // initial amount before interest
   double rate{0.05}; // interest rate

   cout << format("Initial principal: {:>7.2f}\n", principal)
        << format("    Interest rate: {:>7.2f}\n", rate);
   
   // display headers
   cout << format("\n{}{:>20}\n", "Year", "Amount on deposit");

   // calculate amount on deposit for each of ten years
   for (int year{1}; year <= 10; ++year) {
      double amount = principal * pow(1.0 + rate, year);
      cout << format("{:>4d}{:>20.2f}\n", year, amount);
   }
}
