#pragma once
#include "../ParticleSystem.h"
#include "../Particle.h"
#include "ForceForEach.h"

class ForceGravity : public ForceForEach
{
public:
	ForceGravity(ParticleSystem&, double);

	void apply(Particle&);

private:
	double g;
};

