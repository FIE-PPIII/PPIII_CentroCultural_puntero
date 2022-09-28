#include <iostream>

#include "Fecha.h"

using namespace std;

//--------------------
// Constructor Publico
//--------------------

Fecha::Fecha()
{}

Fecha::Fecha(const int dd, const int mm, const int aaaa)
{
    this->dd = dd;
    this->mm = mm;
    this->aaaa = aaaa;
}

//-------------------
// Destructor Publico
//-------------------

Fecha::~Fecha()
{}

//-----------------
// Servicio Publico
//-----------------

void Fecha::Mostrar() const
{
    cout << "Fecha: " << this->dd << "/" << this->mm << "/" << this->aaaa << endl;

    return;
}

void Fecha::Mostrar(const string mensaje) const
{
    cout << mensaje << endl << flush;

    cout << "Fecha: " << this->dd << "/" << this->mm << "/" << this->aaaa << endl;

    return;
}
