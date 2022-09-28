#ifndef __LIBRO_H__

	#define __LIBRO_H__

	#include <string>

	#include "Material.h"

	using namespace std;

	class Libro : public Material
	{
		private:

			//-------------
			// Dato Privado
			//-------------

			int nroPaginas;

		public:

			//--------------------
			// Constructor Publico
			//--------------------

			Libro();
			Libro(const int, const string, const string, const int);

			//-------------------
			// Destructor Publico
			//-------------------

			~Libro();

			//-------------------------
			// Asignar Atributo Publico
			//-------------------------

			void AsignarNroPaginas(const int);

			//-------------------------
			// Obtener Atributo Publico
			//-------------------------

			int ObtenerNroPaginas() const;

			//-----------------
			// Servicio Publico
			//-----------------

			virtual void Mostrar() const;
			virtual void Mostrar(const string) const;
	};

	//-------------------------
	// Asignar Atributo Publico
	//-------------------------

	inline void Libro::AsignarNroPaginas(const int nroPaginas)
	{
		this->nroPaginas = nroPaginas;

		return;
	}

	//-------------------------
	// Obtener Atributo Publico
	//-------------------------

	inline int Libro::ObtenerNroPaginas() const
	{
		return this->nroPaginas;
	}

#endif
