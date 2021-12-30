#ifndef PARTICLE_H
#define PARTICLE_H

namespace particle {

struct Particle {
  double m_x;
  double m_y;

private:
  double m_speed;
  double angle;

public:
  Particle();
  virtual ~Particle();

  void update(int interval);

private:
  void init();
};

} // namespace particle

#endif // !PARTICLE_H
