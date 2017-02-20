#include "Helicoptero.h"

Helicoptero::Helicoptero(string mod, string id, double h, int d, int m, int a)
:Aeronave::Aeronave(h,d,m,a)
{
    modelo=mod;
    idHeli=id;
}

Helicoptero::Helicoptero(cosnt Helicoptero &h)
:Aeronave::Aeronave(h.Aeronave)
{
    this->modelo=h.modelo;
    this->idHeli-h.idHeli
}

Helicoptero::Helicoptero()
:Aeronave::Aeronave()
{
    modelo="desconhecido";
    id="0000";
}

Helicoptero::~Helicoptero()
{
}

//operadores
ostream &operator<<( ostream &output, const Helicoptero &a)
{
    output <<static_cast<Aeronave>(a)<<
    "Modelo: "<<a.modelo<<
	"ID: "<<a.ideHeli<<
    return output;
}


const Aviao & Aviao::operator=(const Aviao &a)
{
	this->modelo=a.modelo;
    this->idHeli = a.ideHeli;
    this->Aeronave=a.Aeronave
    
}

bool Aviao::operator==(const Aviao &a) const{
    if(this->modelo!=a.modelo || this->idHeli!=a.idHeli||this->Aeronave!=a.Aeronave)
	{
       return false; 
    }
    return true;
}

