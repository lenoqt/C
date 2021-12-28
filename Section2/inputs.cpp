#include <iostream>
using namespace std;

int main() {
  string input;
  int var1;
  int var2;
  cout << "Say something: " << flush;
  cin >>  input;
  cout << "Entered: " << input << endl;
  cout << "Gib number 1: " << flush;
  cin >> var1;
  cout << "Gib number 2: " << flush;
  cin >> var2; 
  cout << "Sum is: " << var1 + var2 << endl;
}
