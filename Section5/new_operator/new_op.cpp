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

  Animal *pCat1 = new Animal(); // This doesn't call the destructor 
  pCat1->setName("Freddy");
  pCat1->speak();
  delete pCat1; // This calls the destructor 

  std::cout <<  sizeof(pCat1) << std::endl; // Pointers have to be stored in a long type
  return 0;
}

