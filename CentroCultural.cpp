#include <iostream>

#include "Cliente.h"
#include "PrestamoDisco.h"
#include "PrestamoLibro.h"
	
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	Cliente cliente(1234, "Grispino, Marcelo");
	Fecha fechaInicio_1(12, 4, 2022);
	Fecha fechaFin_1(3, 5, 2022);
	Disco disco_1(163, "La guitarra", "Fabulosos Cadillacs", "Discogs");
	PrestamoDisco prestamoDisco_1(cliente, fechaInicio_1, fechaFin_1, disco_1);
	if (cliente.ObtenerCantidadPeticiones() > 5)
	{
		cout << "El cliente: " << cliente.ObtenerNombre() << " - supero las 5 (cinco) peticiones" << endl;

		return -1;
	}
	
	cliente.Mostrar("\nDatos de la clase Cliente");
	disco_1.Mostrar("\nDatos de la clase Disco");
	prestamoDisco_1.Mostrar("\nDatos del Prestamo Disco");

	Fecha fechaInicio_2(6, 7, 2022);
	Fecha fechaFin_2(5, 8, 2022);
	Libro libro_1(243, "Fundamentos de Bases de Datos", "Silverschatz", 348);
	PrestamoLibro prestamoLibro_1(cliente, fechaInicio_2, fechaFin_2, libro_1);
	if (cliente.ObtenerCantidadPeticiones() > 5)
	{
		cout << "El cliente: " << cliente.ObtenerNombre() << " - supero las 5 (cinco) peticiones" << endl;

		return -1;
	}

	cliente.Mostrar("\nDatos de la clase Cliente");
	libro_1.Mostrar("\nDatos de la clase Libro");
	prestamoLibro_1.Mostrar("\nDatos del Prestamo Libro");

	return 0;
}
