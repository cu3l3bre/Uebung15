
#include <iostream>

#include "d2punkt.h"
#include "d3punkt.h"





using namespace std;


int main()
{
	cout << "Programm zu Uebung15" << endl << endl;


	Punkt2D  p1_2d(1, 2);

	Punkt3D  p1_3d(10,10,10);
	Punkt3D  p2_3d(6, 5, 4);

	Punkt3D  p3_3d;

	p1_2d.zeige2DPunkt();

	p1_3d.zeige3DPunkt();
	p2_3d.zeige3DPunkt();
	p3_3d.zeige3DPunkt();

		
	p3_3d.addiere3DPunkte(p1_3d,p2_3d);

	p3_3d.zeige3DPunkt();



	Punkt3D  p4_3d;

	p4_3d = p1_3d + p2_3d;
	p4_3d.zeige3DPunkt();

	//cout << p3_3d;

	Punkt3D test = p1_3d - p2_3d;

	p1_3d.operator-(p2_3d);

	Punkt3D z = Punkt3D(4, 4, 4) - p2_3d;



	int bli = 5;

	// Referenz auf die Variable bli
	int &bla = bli;


	cout << bli << endl;
	cout << &bli << endl;
	cout << &bla << endl;
	cout << bla << endl;


	system("pause");
	return 0;
}
