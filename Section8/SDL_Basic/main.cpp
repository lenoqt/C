#include "Particle.h"
#include "Screen.h"
#include "Swarm.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace particle;

int main(int argc, char *argv[]) {

  srand(time(NULL));

  Screen screen;

  if (screen.init() == false) {
    std::cout << "Couldn't start SDL\n";
  }

  Swarm swarm;

  while (true) {

    // Update particles

    // Draw particles

    int elapsedTime = SDL_GetTicks();
    unsigned char green = (unsigned char)((1 + sin(elapsedTime * 0.001)) * 128);
    unsigned char red = (unsigned char)((1 + sin(elapsedTime * 0.002)) * 128);
    unsigned char blue = (unsigned char)((1 + sin(elapsedTime * 0.003)) * 128);

    const Particle *const pParticles = swarm.getParticles();

    for (int i{0}; i < Swarm::NPARTICLES; i++) {

      Particle particle{pParticles[i]};

      int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH / 2;
      int y = (particle.m_y + 1) * Screen::SCREEN_HEIGHT / 2;
      screen.setPixel(x, y, red, green, blue);
    }

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
