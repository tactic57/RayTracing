#pragma once

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Couleur
{
private:

	int Blue;
	int Green;
	int Red;

public:

	Couleur();
	Couleur(int Blue, int Green, int Red);
	~Couleur();

	Couleur& clamp();

	Couleur operator *(double v) const;
	Couleur operator *(Couleur other) const;
	Couleur operator +(Couleur other) const;
	Couleur& operator +=(Couleur other);

	int getBlue() const { return Blue; };
	int getGreen() const { return Green; };
	int getRed() const { return Red; };

	string toString() const
	{ 
		return "COULEUR [ BLEU = " + to_string(Blue) + " , GREEN = " + to_string(Green) + " , ROUGE = " + to_string(Red) + " ]";
	};

};


