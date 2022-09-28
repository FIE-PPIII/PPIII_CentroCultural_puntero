#ifndef __CLIENTE_H__

	#define __CLIENTE_H__

	#include <string>

	using namespace std;

	class Cliente
	{
		private:

			//-------------
			// Dato Privado
			//-------------

			int dni;
			string nombre;
			int cantidadPeticiones;

		public:

			//--------------------
			// Constructor Publico
			//--------------------

			Cliente();
			Cliente(const int, const string);

			//-------------------
			// Destructor Publico
			//-------------------

			~Cliente();

			//-------------------------
			// Asignar Atributo Publico
			//-------------------------

			void AsignarDNI(const int);
			void AsignarNombre(const string);

			//-------------------------
			// Obtener Atributo Publico
			//-------------------------

			int ObtenerDNI() const;
			string ObtenerNombre() const;
			int ObtenerCantidadPeticiones() const;

			//-----------------
			// Servicio Publico
			//-----------------

			void SumarUnaPeticion();
			void Mostrar() const;
			void Mostrar(const string) const;

	};

	//-------------------------
	// Asignar Atributo Publico
	//-------------------------

	inline void Cliente::AsignarDNI(const int dni)
	{
		this->dni = dni;

		return;
	}

	inline void Cliente::AsignarNombre(const string nombre)
	{
		this->nombre = nombre;

		return;
	}

	//-------------------------
	// Obtener Atributo Publico
	//-------------------------

	inline int Cliente::ObtenerDNI() const
	{
		return this->dni;
	}

	inline string Cliente::ObtenerNombre() const
	{
		return this->nombre;
	}

	inline int Cliente::ObtenerCantidadPeticiones() const
	{
		return this->cantidadPeticiones;
	}

	inline void Cliente::SumarUnaPeticion()
	{
		this->cantidadPeticiones++;
	}

#endif
