#include "Integrator.h"


Integrator::Integrator::Integrator(const Derivable& _ds, const double& _deltaT):
	ds(_ds), deltaT(_deltaT), t(0)
{
}

void Integrator::Integrator::init()
{
	this->t = 0;
}

/*
void Integrator::Integrator::integrate(Particle& p)
{
	integrate(p, ds, t, deltaT );
	t += deltaT;
}*/