#include "Person.h"
#include <iostream>

int main () {

  Person person1;
  Person person2("Bob", 42);
  Person person3("Sue", 100);
  
  // The '&' symbol indicates the memory location of a object. 

  std::cout << person1.toString() << "\nMemory location: " << &person1 << std::flush;
  std::cout << "\n================\n" << std::flush; 
  std::cout << person2.toString() << "\nMemory location: " << &person2 << std::flush;
  std::cout << "\n================\n" << std::flush; 
  std::cout << person3.toString() << "\nMemory location: " << &person3 << std::endl;
  
  return 0;
}
