#pragma once

#include <iostream>

#include "d2punkt.h"





class Punkt3D : public Punkt2D
{
private:
	int z;
	


public:

	Punkt3D();
	Punkt3D(int,int,int);
	~Punkt3D();

	// Getter
	int getZ() { return z; }
	
	// Setter
	void setZ(int newZ) { z = newZ; }

	// Methoden
	void zeige3DPunkt();
	void addiere3DPunkte(Punkt3D , Punkt3D);

	Punkt3D operator-(Punkt3D other);
	

};


Punkt3D operator+(Punkt3D p1, Punkt3D p2);
//ostream& operator<<(ostream& , Punkt3D );
