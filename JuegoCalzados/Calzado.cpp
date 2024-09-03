#include "Calzado.h"


void Calzado::randomizar()
{ 
	//codigo de la funcion
	talla = rand() % 6 + 40;
	ladoPie = rand() % 2 == 0 ? 'I' : 'D';
}

void Calzado::verDatos()
{
	cout << "Talla: " << talla << " Lado: " << ladoPie << endl;
}

bool Calzado:: CompararCalzados(Calzado cal1, Calzado cal2)
{
	bool resp;
	if (cal1.getTalla() == cal2.getTalla() && cal1.getLadoPie() != cal2.getLadoPie()) {
		resp = true;
	}
	else
		resp = false;
	return resp;
}