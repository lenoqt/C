#include <iostream>


int main (int argc, char *argv[])
{
  
  int color = 0x123456;
  unsigned char red = (color & 0xFF0000) >> 16; // acts like AND gate 
  unsigned char green = (color & 0x00FF00) >> 8; // acts like AND gate 
  unsigned char blue = (color & 0x0000FF); // acts like AND gate 

  /*
   * color:  100010111101111011111011
   * mask:   111111110000000000000000
   * result: 100010110000000000000000
   */

  std::cout << "++Color HEX++" << std::endl;
  std::cout << std::hex << color << std::endl;
  std::cout << "++Color Red++" << std::endl;
  std::cout << std::hex << (int)red << std::endl;
  std::cout << "++Color Green++" << std::endl;
  std::cout << std::hex << (int)green << std::endl;
  std::cout << "++Color Blue++" << std::endl;
  std::cout << std::hex << (int)blue << std::endl;


  // also works
  unsigned char redAgain = color >> 16;
  std::cout << "++Red again++" << std::endl;
  std::cout << std::hex << (int)redAgain << std::endl;

  return 0;
}
