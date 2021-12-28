#ifndef PERSON_H
#define PERSON_H 
#include <iostream>

class Person {


private:
  std::string name;
  int age;

public:
  Person(): name("Unnamed"), age(0) {}

  Person(std::string name, int age): name(name), age(age) {}

  std::string toString();
};

#endif // !PERSON_H
