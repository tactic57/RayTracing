#include "Couleur.h"

Couleur::Couleur()
	: Blue(0), Green(0), Red()
{}

Couleur::Couleur(int B, int G, int R)
	: Blue(B), Green(G), Red(R)
{
	clamp();
}

Couleur::~Couleur()
{

}

Couleur& Couleur::clamp()
{
	Blue = max(0, min(255, Blue));
	Green = max(0, min(255, Green));
	Red = max(0, min(255, Red));

	return *this;
}

Couleur Couleur::operator *(double v) const
{
	Couleur tmp(*this);

	tmp.Blue *= v;
	tmp.Green *= v;
	tmp.Red *= v;

	return tmp;
}

Couleur Couleur::operator *(Couleur other) const
{
	Couleur tmp(*this);

	tmp.Blue *= other.Blue;
	tmp.Green *= other.Green;
	tmp.Red *= other.Red;

	return tmp;
}

Couleur Couleur::operator +(Couleur other) const
{
	Couleur tmp(*this);

	tmp.Blue += other.Blue;
	tmp.Green += other.Green;
	tmp.Red += other.Red;

	return tmp;
}

Couleur& Couleur::operator +=(Couleur other)
{
	Blue += other.Blue;
	Green += other.Green;
	Red += other.Red;

	return *this;
}
