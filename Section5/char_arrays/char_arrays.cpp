#include <iostream>


int main ()
{

  char text[] {'h', 'e', 'l', 'l', 'o'};
  // also can use primitive strings
  
  char text1[] {"Hello"};

  for (int i{0}; i < sizeof(text1); i++) {

    std::cout << i << ": " << text1[i] << "\tASCII: " << (int)text1[i] << "\n";
  }

  std::cout << "============================\n"; 

  int k{0};

  while (true) {
  
    if (text1[k] == 0) {
      break;
    }

    std::cout << text1[k] << std::flush;
    k++;
  }

  return 0;
}
