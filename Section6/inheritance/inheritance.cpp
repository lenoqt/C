#include <iostream>


class Animal
{
public:
  Animal();
  ~Animal();
  void Speak() {
    std::cout << "...\n"; }

private:
  
};

Animal::Animal()
{
}

Animal::~Animal()
{
}

class Cat: public  Animal {
  public:
    void Jump() { std::cout << "Jump\n"; }
};

class Wegie: public Cat {
  public:
    void Attack() { std::cout << "Attack\n"; }
};
int main ()
{
  Animal a;
  a.Speak();
  std::cout << "======\n"; 
  
  Cat cat;
  cat.Speak();
  cat.Jump();
  std::cout << "======\n"; 
  
  Wegie wegie;
  wegie.Speak();
  wegie.Jump();
  wegie.Attack();

  return 0;
}
