#include <iostream>
#include "Cat.h"

int main() {
  Cat jim;
  jim.makeHappy();
  jim.move();

  Cat bob;
  bob.makeSad();
  bob.move();
  return 0;
}
