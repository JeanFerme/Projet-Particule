#ifndef EULER_H
#define EULER_H
#include "Integrator.h"

namespace Integrator {
	class Euler : public Integrator {
	public:
		Euler(const Derivable&, const double&);

		void integrate(Particle&);
		void integrate(Particle&, const Derivable&, const double, const double);
	};
}


#endif