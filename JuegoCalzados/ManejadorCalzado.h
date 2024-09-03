#pragma once
#include "Calzado.h"
class ManejadorCalzado
{
public:
	void CompararCalzados(Calzado cal1, Calzado cal2)
	{
		if (cal1.getTalla() == cal2.getTalla() && cal1.getLadoPie() != cal2.getLadoPie()) {
			std:: cout << "formarian pares";
		}
		else{
			std::cout << "no formarian pares";
		}
	}

};

