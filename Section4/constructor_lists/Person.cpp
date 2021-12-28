#include "Person.h"
#include <sstream>

std::string Person::toString() {
  std::stringstream ss;

  ss << "Name: ";
  ss << name;
  ss << "\nAge: ";
  ss << age;

  return ss.str();
}
