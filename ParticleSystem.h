#pragma once
#include "Particle.h"
#include "ParticleHandler.h"
#include "Force/ForceForEach.h"
#include "Integrator/Integrator.h"
#include <list>
#include <functional>

class ParticleSystem
{
public:
	ParticleSystem(const Integrator::Integrator&);

	void step();

	void pre(const Integrator::Integrator&);

	void clearForces();
	void collectForces();

	void addParticle(Particle& p);
	void addForce(Force& f);
	list<Particle>& particles();

	friend ostream& operator<<(ostream&, const ParticleSystem&);

private:
	list<Particle> ps;
	list<reference_wrapper<Force>> fs;
	list<reference_wrapper<ParticleHandler>> handlers;
	const Integrator::Integrator& solver;
};