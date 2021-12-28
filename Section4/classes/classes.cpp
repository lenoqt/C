#include <iostream>
#include "Date.h"

int main () {

  int day{0}, month{0}, year{0};
  std::cout << "Enter year: " << std::flush;
  std::cin >> year;

  std::cout << "Enter month: " << std::flush;
  std::cin >> month;

  std::cout << "Enter day: " << std::flush;
  std::cin >> day;

  Date date1(year, month, day);

  std::cout << "Year is: " << date1.getYear() << std::endl;
  std::cout << "Month is: " << date1.getMonth() << std::endl;
  std::cout << "Day is: " << date1.getDay() << std::endl;
  
  return 0;
}
