#pragma once
#include <iostream>
#include <Eigen/Dense>

using namespace std;

class Particle
{
public:
	Particle(double);

	void clearForce();

	friend ostream& operator<<(ostream&, const Particle&);

	double mass;
	double density;
	double pressure;

	Eigen::Vector2d position;
	Eigen::Vector2d velocity;
	Eigen::Vector2d force;
};

