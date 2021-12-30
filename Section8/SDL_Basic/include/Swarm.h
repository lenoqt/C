#ifndef SWARM_H
#define SWARM_H

#include "Particle.h"

namespace particle {

class Swarm {

public:
  const static int NPARTICLES = 10000;

public:
  Swarm();
  virtual ~Swarm();

  const Particle *const getParticles() { return m_pParticles; };
  void update(int elapsedTime);

private:
  Particle *m_pParticles;
  int lastTime;
};

} // namespace particle

#endif // !SWARM_H
