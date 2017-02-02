#include "Tripulacao.h"

Tripulacao::Tripulacao(string p, string cP, string aC)
{
	piloto=P;
	coPiloto=cP;
	arChefe=aC;
}

Tripulacao::Tripulacao(const Tripulacao &t)
{
	this->pil=t.pil;
	this->coPil=t.coPil;
	this->arChef=t.arChef;
}

Tripulacao::~Tripulacao()
{
	delete pil;
	delete coPil;
	delete arChef;
}

