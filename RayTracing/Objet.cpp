#include "Objet.h"

Objet::Objet(Couleur c)
	: couleur(c)
{

}

Objet::~Objet()
{

}

Couleur Objet::getCouleur()
{
	return this->couleur;
}