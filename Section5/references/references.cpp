#include <iostream>


void changeSomething(double &value) {
  std::cout << "Value before :" << value << "\n";
  value = 123.4;
}



int main ()
{
  int value1{8};
  int &value2{value1}; // Aliases value1 "value2 references value1"
  value2 = 10;

  std::cout << "Value 1: " << value1 << "\n";
  std::cout  << "Value 2: " << value2 << "\n";

  double value = 4.321;
  changeSomething(value);

  std::cout << "Value after: "<< value << "\n";
  return 0;
}
