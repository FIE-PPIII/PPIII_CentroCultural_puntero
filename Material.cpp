#include <iostream>

#include "Material.h"

//--------------------
// Constructor Publico
//--------------------

Material::Material()
{}

Material::Material(const int codigo, const string titulo, const string autor)
{
	this->codigo = codigo;
	this->titulo = titulo;
	this->autor = autor;
}

//-------------------
// Destructor Publico
//-------------------

Material::~Material()
{}

//-----------------
// Servicio Publico
//-----------------

void Material::Mostrar() const
{
	cout << "Codigo: " << this->ObtenerCodigo() << endl;
	cout << "Titulo: " << this->ObtenerTitulo() << endl;
	cout << "Autor: " << this->ObtenerAutor() << endl;

	return;
}

void Material::Mostrar(const string mensaje) const
{	
	cout << mensaje << endl;

	cout << "Codigo: " << this->ObtenerCodigo() << endl;
	cout << "Titulo: " << this->ObtenerTitulo() << endl;
	cout << "Autor: " << this->ObtenerAutor() << endl;

	return;
}

