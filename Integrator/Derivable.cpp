#include "Derivable.h"

using namespace Integrator;

AccelerationFunc::AccelerationFunc() {

}

double Integrator::AccelerationFunc::deriv(const Particle& p, const double& x, const double& v, const double& f, const double& t) const
{
    return f/p.density;
}
