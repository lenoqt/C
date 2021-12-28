#include <iostream>
#include "Person.h"

int main () {
  
  Person person;
  person.setName("Georgina");

  std::cout << person.getName() << "\n" << std::flush;
  return 0;
}
