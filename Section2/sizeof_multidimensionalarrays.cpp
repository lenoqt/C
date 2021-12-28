#include <iostream>
#include <ostream>

int main() {

  std::string animals[][3] {
    {"fox", "dog", "cat"},
    {"mouse", "squirrel", "parrot"}
  }; 

  std::cout << sizeof(animals) / sizeof(animals[0])  << std::endl; 
  
  for (unsigned int i{0}; i < sizeof(animals) / sizeof(animals[0]); i++) {

    for (unsigned int j{0}; j < sizeof(animals[0]) / sizeof(std::string); j++) {
      
      std::cout << animals[i][j] << " " <<  std::flush;

    }
    std::cout << std::endl;
  }

  return 0;
}
