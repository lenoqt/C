#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

class Person {

public:
  Person();
  std::string toString();
  Person(std::string name, int age);
private:
  std::string name;
  int age;

};
#endif // !PERSON_H
