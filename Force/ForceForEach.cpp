#include "ForceForEach.h"

ForceForEach::ForceForEach(ParticleSystem& _system):
	Force(_system)
{
}

void ForceForEach::apply()
{
	for (Particle& p : system.particles()) {
		this->apply(p);
	}
}

Force::Force(ParticleSystem& _system):
	ParticleHandler(_system)
{
}
