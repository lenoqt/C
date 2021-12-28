#include <iostream> 


void manipulate(double *pValue) {
  std::cout << "2. pValue of int before manipulate: " << *pValue << std::endl;
  *pValue = 10.0;
  std::cout << "3. pValue of int in manipulate: " << *pValue << std::endl;
}

int main () {

  int nValue{9};
  
  // this is a variable pointing to the memory address of nValue not its actual value
  int *pnValue = &nValue; 

  std::cout << "Int value: " << nValue << "\n" << std::flush;
  std::cout << "Pointer to int address: " << pnValue << "\n" << std::flush;
  
  // to access the value on the memory address we use dereferencing by prefixing the pointer with (*)
  std::cout << "Int value via pointer: " << *pnValue << "\n" << std::flush;
  
  std::cout << "+++++++++++++++++++++++++++\n" << std::flush;

  double dValue{123.4};

  std::cout << "1. dValue: " << dValue << "\n" << std::flush;
  manipulate(&dValue);
  std::cout << "4. dValue: " << dValue << "\n" << std::flush;
  
  return 0;
}
