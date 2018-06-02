#pragma once

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Couleur
{
private:

	int blue;
	int green;
	int red;

public:

	Couleur();
	Couleur(int Blue, int Green, int Red);
	~Couleur();

	Couleur& clamp();

	Couleur operator *(double v) const;
	Couleur operator *(Couleur other) const;
	Couleur operator +(Couleur other) const;
	Couleur operator -(Couleur other) const;
	Couleur& operator +=(Couleur other);

	int getBlue() const { return blue; };
	int getGreen() const { return green; };
	int getRed() const { return red; };

	string toString() const
	{ 
		return " [" + to_string(blue) + "," + to_string(green) + "," + to_string(red) + "]";
	};

};


