#ifndef ANIMALS_H
#define ANIMALS_H 
#include <iostream>

namespace animals {

  class Cat
  {
  public:
    Cat();
    virtual ~Cat();
    void Speak();
    void setName( std::string name );

  private:
    std::string name;
    
  };

}
#endif /* ANIMALS_H */
