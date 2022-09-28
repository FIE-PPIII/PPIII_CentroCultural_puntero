#ifndef __PRESTAMO_DISCO_H__

	#define __PRESTAMO_DISCO_H__

	#include <string>

	#include "Disco.h"
	#include "Prestamo.h"

	using namespace std;

	class PrestamoDisco : public Prestamo
	{
		private:

			//-------------
			// Dato Privado
			//-------------

			Disco disco;

		public:

			//--------------------
			// Constructor Publico
			//--------------------

			PrestamoDisco();
			PrestamoDisco(const Cliente, const Fecha, const Fecha, const Disco);

			//-------------------
			// Destructor Publico
			//-------------------

			~PrestamoDisco();

			//-------------------------
			// Asignar Atributo Publico
			//-------------------------

			void AsignarDisco(const Disco);

			//-------------------------
			// Obtener Atributo Publico
			//-------------------------

			Disco ObtenerDisco() const;

			//-----------------
			// Servicio Publico
			//-----------------

			void Mostrar() const;
			void Mostrar(const string) const;
	};

	//-------------------------
	// Asignar Atributo Publico
	//-------------------------

	inline void PrestamoDisco::AsignarDisco(const Disco disco)
	{
		this->disco = disco;

		return;
	}

	//-------------------------
	// Obtener Atributo Publico
	//-------------------------

	inline Disco PrestamoDisco::ObtenerDisco() const
	{
		return this->disco;
	}

#endif
