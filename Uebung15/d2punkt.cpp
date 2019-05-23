
#include "d2punkt.h"


#include <iostream>


using namespace std;


Punkt2D::Punkt2D()
{
	x = 10;
	y = 20;
}

Punkt2D::Punkt2D(int x, int y)
{
	this->x = x;
	this->y = y;
}


Punkt2D::~Punkt2D()
{
}


void Punkt2D::zeige2DPunkt()
{

	cout << "(" << x << "," << y <<  ")" << endl;

}