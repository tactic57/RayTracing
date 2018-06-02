#include "ImageBmp.h"

ImageBmp::ImageBmp(double W, double H, int M, int N)
{
	this->res_M = M;
	this->res_N = N;

	this->iHeight = H;
	this->iWidth = W;

	file = CreateFile("image_sphere.bmp", GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	fileHeader.bfType = 19778;
	fileHeader.bfSize = sizeof(fileHeader.bfOffBits) + sizeof(RGBTRIPLE);
	fileHeader.bfReserved1 = 0;
	fileHeader.bfReserved2 = 0;
	fileHeader.bfOffBits = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);

	fileInfo.biSize = sizeof(BITMAPINFOHEADER);
	fileInfo.biWidth = W;
	fileInfo.biHeight = H;
	fileInfo.biPlanes = 1;
	fileInfo.biBitCount = 24;
	fileInfo.biCompression = BI_RGB;
	fileInfo.biSizeImage = 0;
	fileInfo.biXPelsPerMeter = 0;
	fileInfo.biYPelsPerMeter = 0;
	fileInfo.biClrImportant = 0;
	fileInfo.biClrUsed = 0;

	WriteFile(file, &fileHeader, sizeof(fileHeader), &write, NULL);
	WriteFile(file, &fileInfo, sizeof(fileInfo), &write, NULL);
}


ImageBmp::~ImageBmp()
{
	CloseHandle(file);
}

void ImageBmp::Dessine(int Blue, int Green, int Red)
{
	image.rgbtBlue = Blue;
	image.rgbtGreen = Green;
	image.rgbtRed = Red;

	WriteFile(file, &image, sizeof(RGBTRIPLE), &write, NULL);
}

double ImageBmp::getWidth()
{
	return iWidth;
}


double ImageBmp::getHeight()
{
	return iHeight;
}

int ImageBmp::getM()
{
	return res_M;
}

int ImageBmp::getN()
{
	return res_N;
}
