#ifndef __PRESTAMO_LIBRO_H__

	#define __PRESTAMO_LIBRO_H__

	#include <string>

	#include "Libro.h"
	#include "Prestamo.h"

	using namespace std;

	class PrestamoLibro : public Prestamo
	{
		private:

			//-------------
			// Dato Privado
			//-------------

			Libro libro;

		public:

			//--------------------
			// Constructor Publico
			//--------------------

			PrestamoLibro();
			PrestamoLibro(const Cliente, const Fecha, const Fecha, const Libro);

			//-------------------
			// Destructor Publico
			//-------------------

			~PrestamoLibro();

			//-------------------------
			// Asignar Atributo Publico
			//-------------------------

			void AsignarLibro(const Libro);

			//-------------------------
			// Obtener Atributo Publico
			//-------------------------

			Libro ObtenerLibro() const;

			//-----------------
			// Servicio Publico
			//-----------------

			void Mostrar() const;
			void Mostrar(const string) const;
	};

	//-------------------------
	// Asignar Atributo Publico
	//-------------------------

	inline void PrestamoLibro::AsignarLibro(const Libro libro)
	{
		this->libro = libro;

		return;
	}

	//-------------------------
	// Obtener Atributo Publico
	//-------------------------

	inline Libro PrestamoLibro::ObtenerLibro() const
	{
		return this->libro;
	}

#endif

