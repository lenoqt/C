#include <iostream>
#include <limits.h>
#include <iomanip>

using namespace std;

int main() {

  float fValue = 10.1;
  double dValue = 282.2;
  long double lValue = 12342.213122328881;
  // fixed is from iomanip and it is used to avoid scientific notation when output values
  // also the precision can be setup with setprecision
  cout << setprecision(2) << fixed << "Float (Standard Notation): "  << fValue << endl; 
  // scientific can also be used
  cout << scientific << "Float (Scientific Notation): " << fValue << endl;
  cout << "Size of float(bytes): " << sizeof(float) << endl;
  cout << setprecision(20) << fixed << "Double float (Standard Notation): "  << dValue << endl; 
  cout << "Size of double(bytes): " << sizeof(double) << endl;
  cout << setprecision(20) << fixed << "Long double float (Standard Notation): "  << lValue << endl; 
  cout << "Size of long double(bytes): " << sizeof(long double) << endl;
  return 0;
}
