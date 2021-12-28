#include <iostream>


void showMenu() {
  std::cout << "1. Search" << std::endl; 
  std::cout << "2. View Record" << std::endl; 
  std::cout << "3. Quit" << std::endl;
}

short getInput() {

  std::cout << "Enter Selection: " << std::endl;

  short input{0};
  std::cin >> input;

  return input;
}

void processSelection(short option) {

  switch (option) {

    case 1:
      std::cout << "Searching... " << std::endl;
      break;

    case 2:
      std::cout << "Viewing..." << std::endl;
      break;

    case 3:
      std::cout << "Quitting..." << std::endl;
      break;

    default:
      std::cout << "Please select an item from the menu." << std::endl;
  }
}

int main() {
  
  showMenu();
  short selection = getInput();
  processSelection(selection);

  return 0;
}
