#include "Euler.h"

using namespace Integrator;

Euler::Euler(const Derivable& _ds, const double& _deltaT):
	Integrator(_ds, _deltaT)
{
}

void Euler::integrate(Particle& p, const Derivable& func, const double t, const double dt)
{
	for (int i = 0; i < 2; i++)
	{
		p.velocity[i] += func.deriv(p, p.position[i], p.velocity[i], p.force[i], t) * dt;
		p.position[i] += p.velocity[i] * dt;
	}

}

void Euler::integrate(Particle& p)
{
	integrate(p, ds, t, deltaT);
	t += deltaT;
}