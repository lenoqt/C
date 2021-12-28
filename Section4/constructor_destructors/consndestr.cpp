#include <iostream>
#include "Cat.h"

int main() {
  std::cout << "Starting program ... \n" << std::flush;
  // Curly brackets can be used to deallocate memory more efficiently
  {
    Cat bob;
    bob.move();
  }

  // From here objects in the previous curly brackets are not longer available
  std::cout << "Ending program ...\n" << std::flush;
  return 0;
}
