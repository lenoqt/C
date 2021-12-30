#include "Particle.h"
#include <cmath>

namespace particle {

Particle::Particle() : m_x(0), m_y(0) { init(); }

Particle::~Particle() {}

void Particle::init() {
  m_x = 0;
  m_y = 0;

  angle = (2 * M_PI * rand()) / RAND_MAX;
  m_speed = (0.04 * rand()) / RAND_MAX;

  m_speed *= m_speed;
}

void Particle::update(int interval) {

  angle += interval * 0.0003;
  double xspeed = m_speed * cos(angle);
  double yspeed = m_speed * sin(angle);

  m_x += xspeed * interval;
  m_y += yspeed * interval;

  if (m_x < -1 || m_x > 1 || m_y < -1 || m_y > 1) {
    init();
  }

  if (rand() < RAND_MAX / 100) {

    init();
  }
}
} // namespace particle
