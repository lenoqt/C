#include <iostream>

// Passing arrays this way into a function, you loose the information of
// the length of the array, for that you have to pass it as a argument 
// variable
void show1(const int nElements, std::string texts[]) {

  for (int i{0}; i < nElements; i++) {

    std::cout << texts[i] << std::endl;

  }
}
void show2(const int nElements, std::string *texts) {

  for (int i{0}; i < nElements; i++) {

    std::cout << texts[i] << std::endl;

  }
}

// If you want to pass information about the size of the array
void show3(std::string (&texts)[3]) {

  for (int i{0}; i < sizeof(texts)/sizeof(std::string); i++) {

    std::cout << texts[i] << std::endl;

  }
}

char *getMemory() {
  char *pMem = new char[100];
  return pMem;
}

void freeMemory(char *pMem) {
  delete [] pMem;
}

int main () {
  
  std::string texts[] {"Apple", "Orange", "Banana"};

  show1(3, texts);
  show2(3, texts);
  show3(texts);

  char *pMemory = getMemory();
  freeMemory(pMemory);
  return 0;

}
