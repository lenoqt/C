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

// This way the memory won't be deallocated after the function is out of scope when called somewhere else
// in the program.

Animal *createAnimal() {
  Animal *pAnimal = new Animal();
  pAnimal->setName("Bart");
  return pAnimal;
}

int main () {

  // When using new for returning an object you have to make sure you delete the object when is no longer
  // used anywhere else in the program.

  Animal *pFrog = createAnimal();
  pFrog->speak();
  delete pFrog;
  return 0;

}

