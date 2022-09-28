#include <iostream>

#include "PrestamoLibro.h"

//--------------------
// Constructor Publico
//--------------------

PrestamoLibro::PrestamoLibro()
{}

PrestamoLibro::PrestamoLibro(const Cliente cliente, const Fecha fechaInicio, const Fecha fechaFin, const Libro libro) : Prestamo(cliente, fechaInicio, fechaFin)
{
	this->libro = libro;
}

//-------------------
// Destructor Publico
//-------------------

PrestamoLibro::~PrestamoLibro()
{}

//-----------------
// Servicio Publico
//-----------------

void PrestamoLibro::Mostrar() const
{
	Prestamo::Mostrar();
	
	libro.Mostrar();

	return;
}

void PrestamoLibro::Mostrar(const string mensaje) const
{	
	cout << mensaje << endl;

	Prestamo::Mostrar();
	
	libro.Mostrar();

	return;
}

