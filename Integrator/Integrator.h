#pragma once
#include "Derivable.h"

namespace Integrator {

	class Integrator
	{

	public:
		Integrator(const Derivable&, const double&);

		virtual void init();

		virtual void integrate(Particle&) = 0;
		virtual void integrate(Particle&, const Derivable&, const double, const double) = 0;

	protected:
		double t;
		const double deltaT;
		const Derivable& ds;
	};
}



