#include "ForceGravity.h"

ForceGravity::ForceGravity(ParticleSystem& _system, double _g):
	ForceForEach(_system), g(_g)
{
}

void ForceGravity::apply(Particle& p)
{
	cout << endl << "applying force";
	p.force = p.force + Eigen::Vector2d(0, p.mass * g);
}
