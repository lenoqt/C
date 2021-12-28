#include <iostream>
#include <string>

class Animal
{
public:
  Animal() { std::cout << "Animal created." << std::endl; };
  Animal( const Animal& other): name(other.name) 
  { 
    std::cout << "Animal created by copying" << std::endl; }; // Implicit copy constructor
  void setName(std::string name) { this->name = name; };
  void speak() const { std::cout << "My name is: " << name << std::endl;}

private:
  std::string name;
};

int main ()
{
  Animal animal1;

  animal1.setName("Freddy");

  Animal animal2 = animal1; // We have 2 objects here, but we using the copy constructor, this can be defined explicitly
  animal2.speak();
  animal2.setName("Bob");

  animal1.speak();
  animal2.speak();

  Animal animal3(animal1);
  animal3.speak();

  return 0;
}

