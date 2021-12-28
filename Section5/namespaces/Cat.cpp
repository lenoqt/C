#include "Cat.h"

namespace cats {

  Cat::Cat() {
    std::cout << "Constructor on namespace cats called\n";
  };
  Cat::~Cat() {
    std::cout << "Destructor on namespace cats called\n"; 
  }

  void Cat::Speak() {
    std::cout << "Name from namespace cats: " << name << "\n\n";
  }
  void Cat::setName( std::string name ) { 
    this->name = name; }
}
