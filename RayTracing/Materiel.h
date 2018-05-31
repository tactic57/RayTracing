#pragma once

#include "Couleur.h"

class Materiel
{

private:
	Couleur ambiante;
	Couleur diffuse;
	Couleur speculaire;
	double brillance;

	double coef_diffusion;
	double coef_reflexion;

public:
	Materiel(Couleur amb, Couleur diff, Couleur spec, double b, double cdiff, double crefl);
	Materiel();
	~Materiel();

	Materiel whitePlastic();


};
