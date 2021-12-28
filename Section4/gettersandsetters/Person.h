#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
#include <string>

class Person {
  
  private:
    std::string name;
  
  public:
    Person();
    std::string getName();
    void setName(std::string firstName);

};
#endif // !PERSON_H_
