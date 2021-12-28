#include <iostream>
using namespace std;

int main() {
  string password = "hello";
  
  cout << "Enter password: " << flush;
  string input;
  cin >> input;
  if (password == input) {
    cout << "Matched!" << endl;
  }
  if (password != input) {
    cout << "Not matching..." << endl;
  }
  return 0;
}
