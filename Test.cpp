#include <iostream>
#include <Eigen/Dense>
#include "Particle.h"
#include "Integrator/Derivable.h"
#include "Integrator/Euler.h"
#include "ParticleSystem.h"
#include "Force/ForceGravity.h"

void test_system() {
	std::cout << std::endl << "Start test_system";

	Integrator::AccelerationFunc f;
	Integrator::Derivable& func = f;
	Integrator::Euler eul = Integrator::Euler(func, 0.1);

	ParticleSystem psys = ParticleSystem(eul);

	Particle p(60);
	ForceGravity fo(psys, 9);

	psys.addParticle(p);
	psys.addForce(fo);

	psys.step();

	std::cout << psys;

	std::cout << std::endl << "Test finished";
}

void test_deriv() {
	std::cout << std::endl << "Start test_deriv";

	Particle p = Particle(60);

	std::cout << p;
	Integrator::AccelerationFunc f; 
	Integrator::Derivable& func = f;
	Integrator::Euler eul = Integrator::Euler(func, 0.1);
	eul.integrate(p);

	std::cout << p;

	std::cout << std::endl << "Test finished";
}

int main()
{
	Particle p = Particle(60);

	//Integrator::Derivable funct = Integrator::AccelerationFunc();

	//cout << funct.deriv(p, 1, 1, 1, 1);

	std::cout << p;

	test_deriv();

	test_system();

	return 0;
}