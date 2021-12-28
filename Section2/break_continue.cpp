#include <iostream>
#include <ostream>

int main () {
  for (int i{0}; i < 500; i++) {

    if (i == 10) {
      break;
    }

    else if (i % 2 == 0) {
      continue;
    }

    std::cout << "i is: " << i << std::endl;
  }

  return 0;
}
