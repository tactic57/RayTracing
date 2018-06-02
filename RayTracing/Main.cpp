#include "Couleur.h"
#include "Vector3D.h"
#include "imageBmp.h"
#include "Materiel.h"
#include "Rayon.h"

using namespace std;

int main()
{
	// ================= TEST COULEUR =======================!
	Couleur c1(64, 57, 23);
	Couleur c2(50, 50, 240);

	cout << "c1 " << c1.toString() << endl;
	cout << "c2 " << c2.toString() << endl << endl;

	Couleur c3 = c1 + c2;

	cout << "c3 = c1 + c2" << c3.toString() << endl << endl;

	Couleur c4 = c1 - c2;

	cout << "c4 = c1 - c2" << c4.toString() << endl << endl;

	Couleur c5 = c1 * c2;

	// A quoi sert la multiplication de 2 couleurs du coup ?
	cout << "c5 = c1 * c2" << c5.toString() << "ca fait un peu beaucoup.. " << endl << endl; 

	Couleur c6 = c1 * 0.5;

	cout << "c6 = c1 * 0.5" << c6.toString() << endl << endl;

	//===================TEST IMGBMP========================

	int a = 200;
	int b = 200;
	int c = 200;
	int d = 200;

	ImageBmp img(a, b, c, d);

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			img.Dessine(i, j, 0);
		}
	}
	cout << "image dessinee" << endl;

	// ==================TEST VECTEUR=======================
	Vector3D v1(1, 2, 3);
	Vector3D v2(3, 2, 1);

	Vector3D v3 = v1 + v2;
	
	// faire des toString pour chaque classe
	//cout << v3 << endl;



	system("PAUSE");

	return EXIT_SUCCESS;
}