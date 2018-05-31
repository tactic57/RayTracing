#pragma once

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

class Vector3D
{
	// TEST SI GIT MARCHE
private:

    	float x, y, z;
      
public:
	
	Vector3D ();
	Vector3D (float X, float Y, float Z);
  ~Vector3D();

	Vector3D operator + (Vector3D Vector);
	Vector3D operator - (Vector3D Vector);

	// "produit vectoriel"
	Vector3D operator ^(Vector3D Vector);

	Vector3D operator * (float num);

	// "produit scalaire"
	float operator * (Vector3D Vector);

	Vector3D operator / (float num);

	void operator = (Vector3D Vector);

	bool operator == (Vector3D Vector);

	bool operator != (Vector3D Vector);

	
	/*---------------------------------- Functions ----------------------------------*/
	// Work out the norm of our vector
	float Norm();

	// Work out the vector normalized : Vector.norm() == 1
	Vector3D Normalize();
				
};
