#include <iostream>
#include <string>
using namespace std;
class Datos
{
private:
	string nombre;
	int precio;
	string codigo;

public:
	Datos();
	Datos(string nombre, int precio, string codigo);
	string datoAnterior(Datos datos);
	string getNombre();
	void setNombre(string nombre);
	int getPrecio();
	void setPrecio(int precio);
	string getCodigo();
	void setCodigo(string codigo);
	void imprimirDatos();
};

Datos :: Datos()
{
	//Constructor vacio
}

Datos :: Datos(string nombre, int precio, string codigo)
{
	this-> nombre = nombre;
	this-> precio = precio;
	this-> codigo = codigo;
}

string Datos :: datoAnterior(Datos datos)
{
	return datos.getNombre();
}

void Datos :: setNombre(string nombre)
{
	getline(std::cin, nombre);
	this-> nombre = nombre;
} 

string Datos :: getNombre()
{
	return nombre;
}

int Datos :: getPrecio()
{
	return precio;
}

void Datos :: setPrecio(int precio)
{
	this-> precio = precio;
}

string Datos :: getCodigo()
{
	return codigo;
}

void Datos :: setCodigo(string codigo)
{
	this-> codigo = codigo;
}

void Datos :: imprimirDatos()
{
	cout << "Nombre: " << nombre << endl;
	cout << "Precio: " << precio << endl;
	cout << "Codigo: " << codigo << endl;
	cout << "\n"; 
}

class Nodos
{
private: 
	Datos nodo;
	Datos sig;

public: 
	Nodos();
	Nodos(Datos nodo, Datos sig);
	Datos getNodo();
	Datos getSig();
	void setNodo(Datos nodo);
	void setSig(Datos sig);
};

Nodos :: Nodos() 
{
	//Constructor vacio de Listas
}

Nodos :: Nodos(Datos nodo, Datos sig)
{
	this-> nodo = nodo;
	this-> sig = sig;
}

Datos Nodos :: getNodo()
{
	return nodo;
}

void Nodos :: setNodo(Datos nodo)
{
	this-> nodo = nodo;
}

Datos Nodos :: getSig()
{
	return sig;
}

void Nodos :: setSig(Datos sig)
{
	this-> sig = sig;
} 

int main()
{
	string hola;
	int precio;
	string codigo;

	Datos data[5];

	// Detalle *ptrdetalle = new Detalle;
	// Detalle *arrdetalle[5];
	// ptrdetalle = new Detalle;
	// ptrdetalle->getPrecio(p);
	// arrdetalle[i]=ptrdetalle;

	data[0] = Datos("Nombre0", 0, "CODIGO0");
	data[1] = Datos("Nombre1", 1, "CODIGO1");
	data[2] = Datos("Nombre2", 2, "CODIGO2");
	data[3] = Datos("Nombre3", 3, "CODIGO3");
	data[4] = Datos("Nombre4", 4, "CODIGO4");

	for (int i = 0; i < 5; i++)
	{
		hola = data[i].getNombre();
		precio = data[i].getPrecio();
		codigo = data[i].getCodigo();
		cout << hola << "\t" << precio << "\t" << codigo << "\t" << "\n";
	}

	system("PAUSE");
	return 0;
}