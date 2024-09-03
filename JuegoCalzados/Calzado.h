#pragma once
class Calzado
{
	//definicion de la clase
	//declaracion de atributos
private:
	int talla;
	char ladoPie;
	//declarion de las firmas de las funciones
public:
	Calzado() {
		talla = 0;
		ladoPie = ' ';
	}

	void randomizar();
	bool CompararCalzados(Calzado cal1,Calzado cal2);
	void verDatos();

	//getters
	int getTalla() {
		return talla;
	}
	char getLadoPie() {
		return ladoPie;
	}


};

