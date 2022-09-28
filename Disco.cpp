#include <iostream>

#include "Disco.h"

//--------------------
// Constructor Publico
//--------------------

Disco::Disco()
{}

Disco::Disco(const int codigo, const string titulo, const string autor, const string discografica) : Material(codigo, titulo, autor)
{
	this->discografica = discografica;
}

//-------------------
// Destructor Publico
//-------------------

Disco::~Disco()
{}

//-----------------
// Servicio Publico
//-----------------

void Disco::Mostrar() const
{
	Material::Mostrar();

	cout << "Discografica: " << this->ObtenerDiscografica() << endl;

	return;
}

void Disco::Mostrar(const string mensaje) const
{	
	cout << mensaje << endl;

	Material::Mostrar();

	cout << "Discografica: " << this->ObtenerDiscografica() << endl;

	return;
}

