#ifndef CAT_H
#define CAT_H
#include <iostream>

namespace cats {
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
#endif // !CAT_H
