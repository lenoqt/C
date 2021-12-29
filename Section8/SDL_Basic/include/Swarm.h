#ifndef SWARM_H
#define SWARM_H

#include "Particle.h"

namespace particle {

class Swarm {

public:
  const static int NPARTICLES = 1000;

public:
  Swarm();
  virtual ~Swarm();

  const Particle *const getParticles() { return m_pParticles; };

private:
  Particle *m_pParticles;
};

} // namespace particle

#endif // !SWARM_H
