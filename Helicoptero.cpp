#include "Helicoptero.h"

Helicoptero::Helicoptero()
{
}

Helicoptero::~Helicoptero()
{
}

//operadores
ostream &operator<<( ostream &output, const Helicoptero &a)
{
    output <<"Modelo: "<<a.modelo<<
	"ID: "<<a.ideHeli<<
    return output;
}


const Aviao & Aviao::operator=(const Aviao &a)
{
	this->modelo=a.modelo;
    this->idHeli = a.ideHeli;
}

bool Aviao::operator==(const Aviao &a) const{
    if(this->modelo!=a.modelo && this->idHeli!=a.idHeli)
	{
       return false; 
    }
    return true;
}

