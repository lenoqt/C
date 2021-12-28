#ifndef _PERSON_H_ 
#define _PERSON_H_
#include <iostream>

class Person {
  private:
    std::string name; 
    int age;

  public:
    Person();
    Person(std::string newName) { name = newName; age = 0; };
    Person(std::string newName, int newAge);
    std::string toString();
};


#endif // !_PERSON_H_ 
#define _PERSON_H_
