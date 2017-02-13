#include "Tripulacao.h"

Tripulacao::Tripulacao(string p, string cP, string aC)
{
	pil=p;
	coPil=cP;
	arChef=aC;
}

Tripulacao::Tripulacao(const Tripulacao &t)
{
	this->pil=t.pil;
	this->coPil=t.coPil;
	this->arChef=t.arChef;
}


string Tripulacao::getPil(){
    return pil;
}
string Tripulacao::getCP(){
    return coPil;
}
string Tripulacao::getArC(){
    return arChef;
}


//operadores
ostream &operator<<( ostream &output, const Tripulacao &a)
{
    output <<"Piloto: "<<a.pil<<
            "Copiloto: "<<a.coPil<<
            "Aeromoça Chefe: "<<a.arChef;
    return output;
}

const Tripulacao & Tripulacao::operator=(const Tripulacao &t)
{
    this->pil=t.pil;
    this->coPil=t.coPil;
    this->arChef=t.arChef;
}

bool Tripulacao::operator==(const Tripulacao &t) const;
{
    if(this->pil!=t.pil || this->coPil=t.coPil || this->arChef=t.arChef){
        return false;
    }
    return true;
}


Tripulacao::~Tripulacao()
{
	delete &pil;
	delete &coPil;
	delete &arChef;
}