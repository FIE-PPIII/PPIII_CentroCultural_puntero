#ifndef __MATERIAL_H__

	#define __MATERIAL_H__

	#include <string>

	using namespace std;

	class Material
	{
		private:

			//-------------
			// Dato Privado
			//-------------

			int codigo;
			string titulo;
			string autor;

		public:

			//--------------------
			// Constructor Publico
			//--------------------

			Material();
			Material(const int, const string, const string);

			//-------------------
			// Destructor Publico
			//-------------------

			~Material();

			//-------------------------
			// Asignar Atributo Publico
			//-------------------------

			void AsignarCodigo(const int);
			void AsignarTitulo(const string);
			void AsignarAutor(const string);

			//-------------------------
			// Obtener Atributo Publico
			//-------------------------

			int ObtenerCodigo() const;
			string ObtenerTitulo() const;
			string ObtenerAutor() const;

			//-----------------
			// Servicio Publico
			//-----------------

			virtual void Mostrar() const;
			virtual void Mostrar(const string) const;
	};

	//-------------------------
	// Asignar Atributo Publico
	//-------------------------

	inline void Material::AsignarCodigo(const int codigo)
	{
		this->codigo = codigo;

		return;
	}

	inline void Material::AsignarTitulo(const string titulo)
	{
		this->titulo = titulo;

		return;
	}

	inline void Material::AsignarAutor(const string autor)
	{
		this->autor = autor;

		return;
	}

	//-------------------------
	// Obtener Atributo Publico
	//-------------------------

	inline int Material::ObtenerCodigo() const
	{
		return this->codigo;
	}

	inline string Material::ObtenerTitulo() const
	{
		return this->titulo;
	}

	inline string Material::ObtenerAutor() const
	{
		return this->autor;
	}

#endif
