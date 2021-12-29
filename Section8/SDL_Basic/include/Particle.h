#ifndef PARTICLE_H
#define PARTICLE_H

namespace particle {

struct Particle {
  double m_x;
  double m_y;

public:
  Particle();
  virtual ~Particle(); 
};

} // namespace particle

#endif // !PARTICLE_H
