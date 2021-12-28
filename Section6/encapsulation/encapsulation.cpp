#include <iostream>


class Frog
{
public:
  Frog(std::string name): name(name) {}
  void info() { std::cout << "My name is: " << getName() << std::endl; }

private:
  std::string name;
private:
  std::string getName() { return name; }
};


int main ()
{
  
  Frog frog("Freddy");
  frog.info();

  return 0;
}
