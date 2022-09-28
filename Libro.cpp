#include <iostream>

#include "Libro.h"

//--------------------
// Constructor Publico
//--------------------

Libro::Libro()
{}

Libro::Libro(const int codigo, const string titulo, const string autor, const int nroPaginas) : Material(codigo, titulo, autor)
{
	this->nroPaginas = nroPaginas;
}

//-------------------
// Destructor Publico
//-------------------

Libro::~Libro()
{}

//-----------------
// Servicio Publico
//-----------------

void Libro::Mostrar() const
{
	Material::Mostrar();

	cout << "NroPaginas: " << this->ObtenerNroPaginas() << endl;

	return;
}

void Libro::Mostrar(const string mensaje) const
{	
	cout << mensaje << endl;

	Material::Mostrar();

	cout << "NroPaginas: " << this->ObtenerNroPaginas() << endl;

	return;
}

