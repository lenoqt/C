#include <iostream>

  /*
  3-bit system:
  unsigned -> the most significant byte is the sign.
  111 = 7 = (2 to the power of 3) - 1 = (2*2*2) - 1 = 7 <- Maximun unsigned value
  8-bit system:
  11111111 = (2 power 8) - 1 = 255
  000 = 0
  001 = 1
  010 = 2
  011 = 3
  100 = -0
  101 = -1
  110 = -2
  111 = -3

  001 (1) +
  101 (-1) =
  110 (-2) wrong answer!

  One's complement
  000 = 0
  001 = 1
  010 = 2
  011 = 3
  100 = -3
  101 = -2
  110 = -1
  111 = -0

  001 (1) +
  110 (-1) =
  111 = -0 = 0 right answer!

  0011 (3) +
  0101 (-2) =
  1000
  add overflow bit to right: 000 + 1 = 001

  Two's complement
  000 = 0
  001 = 1
  010 = 2
  011 = 3
  100 = -4
  101 = -3
  110 = -2
  111 = -1
  
  0010 (2) + 
  0110 (-2) = 
  1000 -> discard overflow bit -> 000 

  010 (2) +
  101 (-3) =
  111 = -1 
  */

int main ()
{

  char value{127};

  std::cout << (int)value << std::endl;

  value++; 
  
  // Here you can see printed out how two complement is performed when the type is overflow.
  std::cout << (int)value << std::endl;
  return 0;
}
