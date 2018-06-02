#include "Couleur.h"

Couleur::Couleur()
	: blue(0), green(0), red()
{}

Couleur::Couleur(int B, int G, int R)
	: blue(B), green(G), red(R)
{
	clamp();
}

Couleur::~Couleur()
{

}

Couleur& Couleur::clamp()
{
	blue = max(0, min(255, blue));
	green = max(0, min(255, green));
	red = max(0, min(255, red));

	return *this;
}

Couleur Couleur::operator *(double v) const
{
	Couleur tmp(*this);

	tmp.blue *= v;
	tmp.green *= v;
	tmp.red *= v;

	return tmp;
}

Couleur Couleur::operator *(Couleur other) const
{
	Couleur tmp(*this);

	tmp.blue *= other.blue;
	tmp.green *= other.green;
	tmp.red *= other.red;

	return tmp;
}

Couleur Couleur::operator +(Couleur other) const
{
	Couleur tmp(*this);


	if (tmp.blue + other.blue <= 255)
		tmp.blue += other.blue;
	else
		tmp.blue = 255;


	if (tmp.green + other.green <= 255)
		tmp.green += other.green;
	else
		tmp.green = 255;


	if (tmp.red + other.red <= 255)
		tmp.red += other.red;
	else
		tmp.red = 255;

	return tmp;
}

Couleur Couleur::operator -(Couleur other) const
{
	Couleur tmp(*this);

	if (tmp.blue - other.blue >= 0)
		tmp.blue -= other.blue;
	else
		tmp.blue = 0;

	if (tmp.green - other.green >= 0)
		tmp.green -= other.green;
	else
		tmp.green = 0;

	if (tmp.red - other.red >= 0)
		tmp.red -= other.red;
	else
		tmp.red = 0;

	return tmp;
}

Couleur& Couleur::operator +=(Couleur other)
{

	if (blue + other.blue <= 255)
		blue += other.blue;
	else
		blue = 255;


	if (green + other.green <= 255)
		green += other.green;
	else
		green = 255;


	if (red + other.red <= 255)
		red += other.red;
	else
		red = 255;

	return *this;
}
