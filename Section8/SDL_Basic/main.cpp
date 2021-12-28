#include "Screen.h"
#include <iostream>

int main(int argc, char *argv[]) {

  particle::Screen screen;

  if (screen.init() == false) {
    std::cout << "Couldn't start" << std::endl;
  }

  while (true) {

    // Update particles

    // Draw particles

    for (int y{0}; y < particle::Screen::SCREEN_HEIGHT; y++) {

      for (int x{0}; x < particle::Screen::SCREEN_WIDTH; x++) {

        screen.setPixel(x, y, 128, 0, 255);
      }
    }

    screen.setPixel(400, 300, 255, 255, 255);
    // Draw screen

    screen.update();
    // Check for messages and events
    if (screen.processEvents() == false) {
      break;
    }
  }

  screen.close();

  return 0;
}
