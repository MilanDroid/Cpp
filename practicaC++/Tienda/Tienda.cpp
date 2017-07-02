// Tienda.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "iostream"
#include <string>
using namespace std;


int main()
{
	string mensaje;
	int m;

	mensaje = "Hola";
	m = 10;

	cout << mensaje + " " << m;
	cin >> mensaje;
	cout << mensaje;

    return 0;
}

