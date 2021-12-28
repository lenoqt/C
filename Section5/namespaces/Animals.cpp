#include "Animals.h"

namespace animals {

  Cat::Cat() {
    std::cout << "Constructor on animals namespace called\n";
  }

  Cat::~Cat() {
    std::cout << "Destructor on animals namespace called\n";
  }

  void Cat::Speak() {
    std::cout << "Name from namespace animals: " << name << "\n\n";
  }

  void Cat::setName( std::string name ) { 
    this->name = name; }
}
