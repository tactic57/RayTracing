#pragma once

#include "Couleur.h"

class Objet
{
private:
	Couleur couleur;

public:
	Objet(Couleur c);
	~Objet();

	Couleur getCouleur();


};