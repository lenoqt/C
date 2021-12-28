#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

  const string password{"hello"};
  string input{};
  short i{0};
  do {

    cout << "Enter you password > " << flush;
    cin >> input;

    if (input == password) {
      break;
    }

    else {
      cout << "Access denied, please retry..." << endl;
      i++;
      cout << "Retries: " << i << endl;
    }

    if (i == 3) {
    
      cout << "Maximun retries attempted. Exiting.." << endl;
      exit(1);
    }

  } while (true);
  
  cout << "Access granted.. " << endl;
  return 0;
}
