#ifndef __PRESTAMO_H__

	#define __PRESTAMO_H__

	#include <string>

	#include "Cliente.h"
	#include "Fecha.h"

	using namespace std;

	class Prestamo
	{
		private:

			//-------------
			// Dato Privado
			//-------------

			Cliente cliente;
			Fecha fechaInicio;
			Fecha fechaFin;

		public:

			//--------------------
			// Constructor Publico
			//--------------------

			Prestamo();
			Prestamo(const Cliente, const Fecha, const Fecha);

			//-------------------
			// Destructor Publico
			//-------------------

			~Prestamo();

			//-------------------------
			// Asignar Atributo Publico
			//-------------------------

			void AsignarCliente(const Cliente);
			void AsignarFechaInicio(const Fecha);
			void AsignarFechaFin(const Fecha);

			//-------------------------
			// Obtener Atributo Publico
			//-------------------------

			const Cliente ObtenerCliente() const;
			Fecha ObtenerFechaInicio() const;
			Fecha ObtenerFechaFin() const;

			//-----------------
			// Servicio Publico
			//-----------------

			virtual void Mostrar() const;
			virtual void Mostrar(const string) const;
	};

	//-------------------------
	// Asignar Atributo Publico
	//-------------------------

	inline void Prestamo::AsignarCliente(const Cliente cliente)
	{
		this->cliente = cliente;

		return;
	}

	inline void Prestamo::AsignarFechaInicio(const Fecha fechaInicio)
	{
		this->fechaInicio = fechaInicio;

		return;
	}

	inline void Prestamo::AsignarFechaFin(const Fecha fechaFin)
	{
		this->fechaFin = fechaFin;

		return;
	}

	//-------------------------
	// Obtener Atributo Publico
	//-------------------------

	inline const Cliente Prestamo::ObtenerCliente() const
	{
		return this->cliente;
	}

	inline Fecha Prestamo::ObtenerFechaInicio() const
	{
		return this->fechaInicio;
	}

	inline Fecha Prestamo::ObtenerFechaFin() const
	{
		return this->fechaFin;
	}

#endif
