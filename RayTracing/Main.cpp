#include "Couleur.h"
#include "Vector3D.h"
#include "imageBmp.h"
#include "Materiel.h"
#include "Rayon.h"

using namespace std;

int main()
{
	// =============== TEST COULEUR =======================
	Couleur c1(24, 27, 23);
	Couleur c2(50, 50, 50);

	Couleur c3 = c1 + c2;

	cout << "c3 : " << c3.getBlue() << " " << c3.getGreen() << " " << c3.getRed() << endl;

	// ==================TEST VECTEUR=======================
	Vector3D v1(1, 2, 3);
	Vector3D v2(3, 2, 1);

	Vector3D v3 = v1 + v2;
	
	// faire des toString pour chaque classe
	//cout << v3 << endl;



	system("PAUSE");

	return EXIT_SUCCESS;
}