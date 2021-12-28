#include <iostream>

int main ()
{
  char text[] = "hello";
  int nChars = sizeof(text) - 1; // Length of array
  char *pStart = text; // Start of array
  char *pEnd = text + nChars - 1;

  while (pStart < pEnd) {

    char memo = *pStart;
    *pStart = *pEnd;
    *pEnd = memo;
    pStart++;
    pEnd--;
  }

  std::cout << text << "\n";

  return 0;
}
