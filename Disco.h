#ifndef __DISCO_H__

	#define __DISCO_H__

	#include <string>

	#include "Material.h"

	using namespace std;

	class Disco : public Material
	{
		private:

			//-------------
			// Dato Privado
			//-------------

			string discografica;

		public:

			//--------------------
			// Constructor Publico
			//--------------------

			Disco();
			Disco(const int, const string, const string, const string);

			//-------------------
			// Destructor Publico
			//-------------------

			~Disco();

			//-------------------------
			// Asignar Atributo Publico
			//-------------------------

			void AsignarDiscografica(const string);

			//-------------------------
			// Obtener Atributo Publico
			//-------------------------

			string ObtenerDiscografica() const;

			//-----------------
			// Servicio Publico
			//-----------------

			virtual void Mostrar() const;
			virtual void Mostrar(const string) const;
	};

	//-------------------------
	// Asignar Atributo Publico
	//-------------------------

	inline void Disco::AsignarDiscografica(const string discografica)
	{
		this->discografica = discografica;

		return;
	}

	//-------------------------
	// Obtener Atributo Publico
	//-------------------------

	inline string Disco::ObtenerDiscografica() const
	{
		return this->discografica;
	}

#endif
