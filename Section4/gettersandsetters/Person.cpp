#include "Person.h"

Person::Person() {
  name = "George";
}

std::string Person::getName() {
  return "Person name is: " + name;
}

void Person::setName(std::string firstName) {
  name = firstName;
} 
