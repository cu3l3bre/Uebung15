#pragma once


class Punkt2D
{
protected:
	int x;
	int y;


public:

	Punkt2D();
	Punkt2D(int, int);
	~Punkt2D();


	// Getter
	int getX() { return x; }
	int getY() { return y; }

	// Setter

	void setX(int newX) { x = newX; }
	void setY(int newY) { y = newY; }

	// Methoden
	
	void zeige2DPunkt();



};
