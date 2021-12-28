#include <iostream>

int main (int argc, char *argv[])
{
  const int NSTRINGS{5};

  std::string texts [NSTRINGS]{"one", "two", "three", "four", "five"};

  std::string *pTexts = texts;

  pTexts += 3;

  std::cout << *pTexts << "\n";

  pTexts -= 2;

  std::cout << *pTexts << "\n";

  std::string *pEnd = &texts[NSTRINGS];
  pTexts = &texts[0];

  std::cout << *pTexts << "\n";
  while (pTexts != pEnd) {
    std::cout << *pTexts << "\n";
    pTexts++;
  }

  // Set pTexts back to start.
  
  pTexts = &texts[0];

  long elements = long(pEnd - pTexts);

  std::cout << elements << "\n";
  // Set pTexts back to start.
  
  pTexts = &texts[0];

  // Middle of array 
  pTexts += NSTRINGS/2;

  std::cout << *pTexts << "\n"; 

  return 0;
}
