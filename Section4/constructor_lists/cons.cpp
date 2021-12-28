#include <iostream>
#include "Person.h"
int main() {

  Person person1;
  Person person2("Bob", 11);
  Person person3("Ada", 22);

  std::cout << "Person 1: \n" << person1.toString() << "\n" << std::flush;
  std::cout << "Person 2: \n" << person2.toString() << "\n" << std::flush;
  std::cout << "Person 3: \n" << person3.toString() << "\n" << std::flush;

  return 0;
}
