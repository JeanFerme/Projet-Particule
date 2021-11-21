#include "ParticleSystem.h"


ParticleSystem::ParticleSystem(const Integrator::Integrator& _solver):
	solver(_solver)
{

}

void ParticleSystem::step()
{
	pre(this->solver);
}

void ParticleSystem::pre(const Integrator::Integrator& _solver)
{
	cout << endl << "pre";
	this->clearForces();
	this->collectForces();
}


void ParticleSystem::clearForces()
{
	cout << endl << "clearing forces";
	for (Particle& p : ps) {
		cout << endl << "one force cleared";
		p.clearForce();
	}
}

void ParticleSystem::collectForces()
{
	cout << endl << "collecting forces";
	for (Force& force : fs) {
		cout << endl << "one force colllected";
		force.apply();
	}
}

void ParticleSystem::addParticle(Particle& p)
{
	this->ps.push_back(p);
}

void ParticleSystem::addForce(Force& f)
{
	this->fs.push_back(f);
}

list<Particle>& ParticleSystem::particles()
{
	return this->ps;
}

ostream& operator<<(ostream& out, const ParticleSystem& system)
{
	for (const Particle& p : system.ps) {
		out << p;
	}
	return out;
}
