#include <iostream>

#include "PrestamoDisco.h"

//--------------------
// Constructor Publico
//--------------------

PrestamoDisco::PrestamoDisco()
{}

PrestamoDisco::PrestamoDisco(const Cliente cliente, const Fecha fechaInicio, const Fecha fechaFin, const Disco disco) : Prestamo(cliente, fechaInicio, fechaFin)
{
	this->disco = disco;
}

//-------------------
// Destructor Publico
//-------------------

PrestamoDisco::~PrestamoDisco()
{}

//-----------------
// Servicio Publico
//-----------------

void PrestamoDisco::Mostrar() const
{
	Prestamo::Mostrar();
	
	disco.Mostrar();

	return;
}

void PrestamoDisco::Mostrar(const string mensaje) const
{	
	cout << mensaje << endl;

	Prestamo::Mostrar();
	
	disco.Mostrar();

	return;
}

