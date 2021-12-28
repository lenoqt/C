#include <sstream>
#include "Person.h"



Person::Person() {
  name = "undefined";
  age = 0;
}

Person::Person(std::string newName, int newAge) {
  name = newName;
  age = newAge;
}

std::string Person::toString() {
  std::stringstream ss;

  ss << "Name: ";
  ss << name;
  ss << "\nAge: ";
  ss << age;

  return ss.str();
}
