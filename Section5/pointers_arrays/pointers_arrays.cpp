#include <iostream>


int main ()
{
  std::string texts[] {"one", "two", "three"};

  std::string *pTexts =  texts;

  for (int i{0}; i < sizeof(texts)/sizeof(std::string); i++) {
  
    std::cout << pTexts[i] << " " << std::flush;
  }

  std::cout << "\n";

  for (int i{0}; i < sizeof(texts)/sizeof(std::string); i++, pTexts++) {
  
    std::cout << *pTexts << " " << std::flush;

  }
  std::cout << "\n";

  std::string *pElement = texts;
  std::string *pEnd = &texts[2];


  while(true) {
    std::cout << *pElement << " " << std::flush;

    if (pElement == pEnd) {
      std::cout << "\n";
      break;
    }
    pElement++;
  }
  return 0;
}
