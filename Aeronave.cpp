#include "Aeronave.h"

Aeronave::Aeronave(double h, int d, int m, int a)
:dtFab(d,m,a);
{
  altAtual=h;
}
Aeronave::Aeronave(const Aeronave &a)
:dtFab(a.dtFab);
{
	this->altAtual=a.altAtual;
}
Aeronave::Aeronave()
{
	altAtual=0;
	dtFab(1,1,1);
}


Aeronave::~Aeronave()
{
}

double Aeronave::getAlt() const
{
	return altAtual;	
}

double Aeronave::dAlt(double d)
{
	return altAtual=altAtual+d;
}

bool Aeronave::testAlt()
{
	if(altAtual<=1000&&altAtual>=0){
		return true;
	}
	return false;	
}

//operadores
ostream &operator<<( ostream &output, const Aeronave &a)
{
    output <<"Altura: "<<a.altAtual<<
	"Fab: "<<a.dtFab<<
    return output;
}


const Aviao & Aviao::operator=(const Aviao &a)
{
	this->altAtual=a.altAtual;
    this->dtFab = a.dtFab;
}

bool Aviao::operator==(const Aviao &a) const{
    if(this->altAtual!=a.altAtual && this->dtFab!=a.dtFab)
	{
       return false; 
    }
    return true;
}