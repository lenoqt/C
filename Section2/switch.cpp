#include <iostream>

int main () {

    int value{5};

    switch (value) {

      case 4:
        std::cout << "Value is 4" << std::endl;
        break;
      case 5:
        std::cout << "Value is 5" << std::endl;
        break;
      case 6:
        std::cout << "Value is 6" << std::endl;

      default:
        std::cout << "Unrecognized value" << std::endl;
    }
  return 0;
}
