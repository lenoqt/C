// fig03_04.cpp
// Prefix increment and postfix increment operators.
#include <iostream>
using namespace std;

int main() {
   // demonstrate postfix increment operator
   int c{5};
   cout << "c before postincrement: " << c << endl; // prints 5
   cout << "   postincrementing c:  " << c++ << endl; // prints 5
   cout << " c after postincrement: " << c << endl; // prints 6

   cout << endl; // skip a line

   // demonstrate prefix increment operator
   c = 5;
   cout << " c before preincrement: " << c << endl; // prints 5
   cout << "   preincrementing c:   " << ++c << endl; // prints 6
   cout << " c after preincrement:  " << c << endl; // prints 6
}
