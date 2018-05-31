#pragma once

#include "Vector3D.h"

class Rayon
{
private:
	Vector3D origine;
	Vector3D direction;
	int t; // Parametre t

public:

	Rayon();
	Rayon(const Vector3D& o, const Vector3D& dir, int d);
	~Rayon();
	
	Vector3D getOrigine() const;
	Vector3D getDirection() const;
	int getT() const;

	void setT(int d);
};