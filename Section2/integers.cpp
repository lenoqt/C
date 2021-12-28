#include <iostream>
#include <limits.h>
using namespace std; 

int main() {
  int value = 7777;
  cout << value << endl;
  cout << INT_MAX << endl;
  cout << INT_MIN << endl;

  long int lValue = 232983923829;
  cout << lValue << endl;
  
  short int sValue = 22323;

  cout << sValue << endl;

  unsigned int uValue = 324231;

  cout << uValue << endl;

  cout << "Size of int: " << sizeof(int) << endl;
  cout << "Size of long int: " <<  sizeof(long int) << endl;
  cout << "Size of short int: " << sizeof(short int) << endl;
  cout << "Size of unsigned int: " << sizeof(unsigned int) << endl;
  return 0;
}
