#include <iostream>
#include "Cat.h"

Cat::Cat() {
  std::cout << "Cat created..\n" << std::flush;

  happy = true;
}

Cat::~Cat() {
  std::cout << "Cat destroyed..\n" << std::flush;
}

void Cat::move() {
  if (happy){
    std::cout << "Moved.." << std::endl;
  }

  else {
    std::cout << "Not happy.." << std::endl;
  }
}
