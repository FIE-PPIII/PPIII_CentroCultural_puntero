#include <iostream>

#include "Cliente.h"

//--------------------
// Constructor Publico
//--------------------

Cliente::Cliente()
{}

Cliente::Cliente(const int dni, const string nombre)
{
	this->dni = dni;
	this->nombre = nombre;
	this->cantidadPeticiones = 0;
}

//-------------------
// Destructor Publico
//-------------------

Cliente::~Cliente()
{}

//-----------------
// Servicio Publico
//-----------------

void Cliente::Mostrar() const
{
	cout << "DNI: " << this->ObtenerDNI() << endl;
	cout << "Nombre: " << this->ObtenerNombre() << endl;

	return;
}

void Cliente::Mostrar(const string mensaje) const
{	
	cout << mensaje << endl;

	cout << "DNI: " << this->ObtenerDNI() << endl;
	cout << "Nombre: " << this->ObtenerNombre() << endl;

	return;
}

