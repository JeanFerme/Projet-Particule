#pragma once
#include "Particle.h"
#include "ParticleSystem.h"

class ParticleSystem;

class ParticleHandler
{
public:
	ParticleHandler(ParticleSystem&);

	virtual void apply() = 0;

protected:
	 ParticleSystem& system;
};

