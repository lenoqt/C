#include <iostream>
#include <SDL.h> 


int main (int argc, char *argv[])
{
 
  std::cout << "Hello" << std::endl;

  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    std::cout << "SDL Init failed." << std::endl;
    return 1;
  }

  std::cout << "SDL Init succeded" << std::endl;

  SDL_Quit();

  return 0;
}
