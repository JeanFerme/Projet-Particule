#pragma once
#include "../ParticleHandler.h"
#include "../Particle.h"

class Force : public ParticleHandler {
public:
	Force(ParticleSystem&);
};

class ForceForEach : public Force
{
public:
	ForceForEach(ParticleSystem&);

	virtual void apply();

	virtual void apply(Particle&) = 0;
};

