

#include "d3punkt.h"

#include <iostream>
#include "d2punkt.h"


using namespace std;


Punkt3D::Punkt3D()
{
	this->x = 0;
	y = 0;
	this->z = 0;
}


Punkt3D::Punkt3D(int x , int y, int z) : Punkt2D(x, y)
{
	this->z = z;
}

Punkt3D::~Punkt3D()
{
}


void Punkt3D::zeige3DPunkt()
{
	cout << "(" << x << "," << y  << "," << z << ")" << endl;
	//cout << "(" << getX() << "," << getY() << "," << z << ")" << endl;
}


void Punkt3D::addiere3DPunkte(Punkt3D p1, Punkt3D p2)
{
	x = p1.x + p2.x;
	y = p1.y + p2.y;
	z = p1.z + p2.z;
}





Punkt3D Punkt3D::operator-( Punkt3D p2)
{
	Punkt3D ergebnis;

	int x = this->x + p2.getX();
	int y = this->y + p2.getY();
	int z = this->z + p2.getZ();

	ergebnis.setX(x);
	ergebnis.setY(y);
	ergebnis.setZ(z);

	return ergebnis;
}


//////////////////////////////////////////////////////////////////////////////
// keine Klassen Methode?? wenn dem nicht so ist, wo sollte die da hin?
Punkt3D operator+(Punkt3D p1, Punkt3D p2)
{
	Punkt3D ergebnis;

	int x = p1.getX() + p2.getX();
	int y = p1.getY() + p2.getY();
	int z = p1.getZ() + p2.getZ();

	ergebnis.setX(x);
	ergebnis.setY(y);
	ergebnis.setZ(z);

	return ergebnis;
}


//ostream& operator<<(ostream& ausgabe, Punkt3D p1)
//{
//	ausgabe << "Wert von x: " << p1.getX() << endl;
//	ausgabe << "Wert von y: " << p1.getY() << endl;
//	ausgabe << "Wert von z: " << p1.getZ() << endl;
//	return ausgabe;
//}