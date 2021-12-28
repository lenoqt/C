#include <iostream>

class Animal {

  private:
    std::string name;

  public:
    void setName(std::string name) {this->name = name; };
    void speak() const { std::cout << "My name is: " << name << std::endl; }
};

int main ()
{
  
  const double PI = 3.14592;
  std::cout << PI << std::endl;

  Animal animal;
  animal.setName("Freddy");
  animal.speak();

  int value{9};
  const int * const pValue = &value; // leads to compliler error in lines 29-30 because the address is constant and also the value is constant

  std::cout << *pValue << "\n";

  int number{11};
  pValue = &number;
  *pValue = 12;
  std::cout << *pValue << "\n";

  return 0;
}
