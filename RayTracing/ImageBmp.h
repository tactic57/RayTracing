#pragma once

#include <windows.h>

class ImageBmp
{
	double iWidth; // nombre de pixel en largeur
	double iHeight; // nombre de pixel en hauteur
	int res_M; // résolution horizontale
	int res_N; // résolution vertical

	HANDLE file;
	BITMAPFILEHEADER fileHeader;
	BITMAPINFOHEADER fileInfo;
	RGBTRIPLE image;
	DWORD write = 0;

public:

	ImageBmp(double W, double H, int res_M, int res_N);
	~ImageBmp();

	void Dessine(int Blue, int Green, int Red);

	double getWidth();
	double getHeight();
	int getM();
	int getN();
};
