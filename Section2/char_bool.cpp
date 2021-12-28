#include <iostream>
#include <iomanip>
#include <limits.h>
using namespace std;

int main() {
  bool bValue = false;

  cout << "Bool: " << bValue << endl; 

  char cValue = 'g';
  cout << (int)cValue << endl;
  cout <<  "Size of char: " << sizeof(char) << endl;

  wchar_t wValue = 'i';
  cout << (char)wValue << endl;
  cout << "Size of w_chart: " <<  sizeof(wchar_t) << endl;
  return 0;
}
