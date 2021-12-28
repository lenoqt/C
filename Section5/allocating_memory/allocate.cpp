#include <iostream>

class Animal
{
private:
  std::string name;

public:
  Animal() { 
    std::cout << "Animal created." << std::endl; };
  
  Animal( const Animal& other): 
    name(other.name) { 
    std::cout << "Animal created by copying" << std::endl; }; // Implicit copy constructor

  ~Animal() {
    std::cout << "Destructor called" << std::endl;
  }

  void setName(std::string name) { 
    this->name = name; 
  }
  
  void speak() const { 
    std::cout << "My name is: " << name << std::endl;
  }

};

int main () {

  Animal *pAnimal = new Animal[10];
  pAnimal[5].setName("George");
  pAnimal[5].speak();

  delete []  pAnimal;

  char *pMem = new char[1000];
  delete [] pMem;

  return 0;

}

