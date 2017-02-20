#include "Cargueiro.h"


Cargueiro::Cargueiro(float c, float cM, )
:Aviao::Aviao();
{
	carga=c;
	cargaMax=cM;
}

Cargueiro::Cargueiro(const Cargueiro &c)
:Aviao::Aviao(c.Aviao);
{
	this->carga=c.carga;
	this->cargaMax=c.cargaMax;
}

Cargueiro::Cargueiro()
:Aviao::Aviao();
{
	carga=0;
	cargaMax=1;			
}

Cargueiro::~Cargueiro()
{
}

void Cargueiro::dCarga(float c)
{
	carga=carga+c;
}

bool Cargueiro::testP()
{
	if(carga>cargaMax)
	{
		cout<<"carga maxima excedida";
		return false
	}
	return true;
}


//operadores
ostream &operator<<( ostream &output, const Cargueiro &a)
{
    output <<static_cast<Aviao>(a)<<
    "Carga: "<<a.carga<<
	"Carga Máxima: "<<a.cargaMax<<
    return output;
}


const Cargueiro & Cargueiro::operator=(const Cargueiro &a)
{
	this->carga=a.carga;
    this->cargaMax = a.cargaMax;
    this->Aviao=a.Aviao
}

bool Cargueiro::operator==(const Cargueiro &a) const{
    if(this->carga!=a.carga || this->cargaMax!=a.cargaMax||this->Aviao!=a.Aviao)
	{
       return false; 
    }
    return true;
}