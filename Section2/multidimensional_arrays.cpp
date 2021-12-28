#include <iostream>
#include <ostream>

int main() {

    std::string animals[][3] {
      {"fox", "dog", "cat"},
      {"mouse", "squirrel", "parrot"}
    }; 

    for (int i{0}; i < 2; i++) {
    
      for (int j{0}; j < 3; j++) {
      
        std::cout << animals[i][j] << " " << std::flush;
      }

      std::cout << std::endl;
    }

    return 0;
}
