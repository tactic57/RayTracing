#include "Rayon.h"

Rayon::Rayon()
{

}

Rayon::Rayon(const Vector3D& o, const Vector3D& dir, int d)
	: origine(o), direction(dir), t(d)
{

}

Rayon::~Rayon()
{

}

Vector3D Rayon::getOrigine() const
{
	return origine;
}

Vector3D Rayon::getDirection() const
{
	return direction;
}

int Rayon::getT() const
{
	return t;
}

void Rayon::setT(int d)
{
	t = d;
}