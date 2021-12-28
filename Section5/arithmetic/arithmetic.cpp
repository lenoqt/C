#include <iostream>

int main() {
  
  // if values of an operation are ints, C++ will discard the remainder so to solve that is to cast one 
  // of the values to the correct type
  double value1{7/2};
  std::cout << "Double 7/2 without casting: "<< value1 << std::endl;
  double value2{ (double)7/2};
  std::cout << "Double 7/2 with casting: "<< value2 << std::endl;
  

  int value3{8};
  value3 += 1; // Equivalent to value3 value3 + 1 or value3++ 
  std::cout << "Value3: " << value3 << std::endl;

  int value4{10};
  value4 /= 5; // Equivalent to value4 = value4/5
  std::cout << "Value4: " << value4 << std::endl;
  
  // Modulus operand returns the remainder of the division.
  int value5{13%5};
  std::cout << "Value5: " << value5 << std::endl;

  double equation = 5.3/4+2*6; // Precedence of arithmetic is that multiplication and division are done first
  std::cout << "Equation 5.3/4+2*6 = " << equation << std::endl; // This is equal to (5.3/4)+(2*6) 

  return 0;
}
