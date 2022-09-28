#include <iostream>

#include "Cliente.h"
#include "Prestamo.h"

//--------------------
// Constructor Publico
//--------------------

Prestamo::Prestamo()
{}

Prestamo::Prestamo(const Cliente cliente, const Fecha fechaInicio, const Fecha fechaFin)
{
	this->cliente = cliente;
	this->cliente.SumarUnaPeticion();
	this->fechaInicio = fechaInicio;
	this->fechaFin = fechaFin;
}

//-------------------
// Destructor Publico
//-------------------

Prestamo::~Prestamo()
{}

//-----------------
// Servicio Publico
//-----------------

void Prestamo::Mostrar() const
{
	cout << "DNI: " << this->cliente.ObtenerDNI() << endl;
	cout << "Nombre: " << this->cliente.ObtenerNombre() << endl;

	this->fechaInicio.Mostrar();

	this->fechaFin.Mostrar();

	return;
}

void Prestamo::Mostrar(const string mensaje) const
{	
	cout << mensaje << endl;

	cout << "DNI: " << this->cliente.ObtenerDNI() << endl;
	cout << "Nombre: " << this->cliente.ObtenerNombre() << endl;

	this->fechaInicio.Mostrar();

	this->fechaFin.Mostrar();

	return;
}
