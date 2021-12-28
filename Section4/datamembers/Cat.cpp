#include <iostream>
#include "Cat.h"

void Cat::move() {
  if (happy){
    std::cout << "Moved.." << std::endl;
  }

  else {
    std::cout << "Not happy.." << std::endl;
  }
}

void Cat::makeHappy() {
  happy = true;
}

void Cat::makeSad() {
  happy = false;
}
