// JuegoCalzados.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calzado.h";
#include "ManejadorCalzado.h";
using namespace std;
int main()
{
    
    //declaracion de los objetos
	Calzado cal1, cal2, manejador;

    //implementacion de la logica utilizando la clase ManejadorCalzado

    int resp;
    cin>> resp;
	cal1.randomizar();
	cal2.randomizar();
    std::cout << "Juego de Calzados, Adivina los pares (1 para sí, 0 para no)!!\n";
	cal1.verDatos();
	cal2.verDatos();
	if (manejador.CompararCalzados(cal1, cal2) || resp == 1) {
		std:: cout << "formarian pares";
	}
	else
      cout << "no formarian pares";
	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
