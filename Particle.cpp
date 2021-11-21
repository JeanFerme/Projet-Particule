#include "Particle.h"

using namespace std;

Particle::Particle(double _mass) :
	mass(_mass), density(1), pressure(0) {
	position << 0, 0;
	velocity << 0, 0;
	force << 0, 0;
}

void Particle::clearForce()
{
	this->force << 0, 0;
}

ostream& operator<<(ostream& out, const Particle& particle)
{
	Eigen::IOFormat fmt(5, 0, ", ", "\n", "", "");

	out << endl << "p(" << particle.position.transpose().format(fmt) << ")";
	out << endl << "v(" << particle.velocity.transpose().format(fmt) << ")";
	out << endl << "f(" << particle.force.transpose().format(fmt) << ")";

	return out;
}
