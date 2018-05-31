#include "Materiel.h"

Materiel::Materiel(Couleur amb, Couleur diff, Couleur spec, double b, double cdiff, double crefl)
	: ambiante(amb), diffuse(diff), speculaire(spec), brillance(b), coef_diffusion(cdiff), coef_reflexion(crefl)
{}

Materiel::Materiel(){}

Materiel::~Materiel(){}

Materiel Materiel::whitePlastic()
{
	Materiel m;
	m.ambiante = Couleur(0.1, 0.1, 0.1);
	m.diffuse = Couleur(0.7, 0.7, 0.7);
	m.speculaire = Couleur(1.0, 1.0, 0.98);
	m.brillance = 5.0;
	m.coef_diffusion = 0.9f;
	m.coef_reflexion = 0.1f;

	return m;
}