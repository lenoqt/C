#include <iostream>

int main() {

  int values[3];
  
  values[0] = 1;
  values[1] = 2;
  values[2] = 3;
  
  std::cout <<  values[0] << std::endl;
  std::cout <<  values[1] << std::endl;
  std::cout <<  values[2] << std::endl;
  
  double numbers[4] {4.2, 2.3, 3.14, 1.48};
  
  for (int i = 0; i < 4; i++) {
    std::cout << "i: " << numbers[i] << std::endl;
  }

  return 0;
}
