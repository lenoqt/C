#include "Cat.h"
#include "Animals.h"


int main ()
{
  // Cat from animals namespace
  animals::Cat cat1;
  cat1.setName("Yamato");
  cat1.Speak();

  // Cat from cats namespace 
  cats::Cat cat2;
  cat2.setName("Yara");
  cat2.Speak();

  return 0;
}
