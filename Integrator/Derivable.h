#pragma once
#include "../Particle.h"

namespace Integrator {

	class Derivable
	{
	public:
		virtual double deriv(const Particle& p, const double&, const double&, const double&, const double&) const = 0;
	};

	class AccelerationFunc : public Derivable
	{
	public:
		AccelerationFunc();

		double deriv(const Particle&, const double&, const double&, const double&, const double&) const;
	};
}



