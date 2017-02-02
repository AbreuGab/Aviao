#include <iostream>
using std::cout;
using std::endl;
#include "Aviao.h"


double Aviao::altMax=1000;

Aviao::Aviao(string mod, string, id, string mt, double h, int d, int m, int a, string pl, string cp, string aC)
{
	
	this->modelo=mod;
	this->idAviao=id;
	this->motor=mt;
	this->altAtual=h;
	Data dtFab(d,m,a);
	Tripulacao trip1(pl,cp,aC)
}

Aviao::Aviao()
{
	this->modelo="indefinido";
	this->idAviao="indefinido";
	this->motor="indefinido";
	this->altAtual=0;
	Data dtFab;
	Tripulacao trip1;
}

Aviao::Aviao(const Aviao &a)
{
	this->modelo=a.modelo;
	this->idAviao=a.idAviao;
	this->motor=a.motor;
	this->altAtual=a.altAtual;
	Data dtFab(a.dtFab);
	Tripulacao trip1(a.trip1);
}

double Aviao::dAltr(double d)
{
	return altAtual=altAtual+d;
}

bool Aviao::testAlt(double h)
{
	if(h<=1000&&h>=0){
		return true;
	}
	return false;	
}

void Aviao::intArr()
{
	for(int i=0;i<size;i++){
		pass[I]="";
	}
}

double Aviao::getAlt() const
{
	return altAtual;	
}

void Aviao::insPass(int i, string nome) 
{
	pass[i]=nome;
}

void Aviao::mostrarNomePass()
{
	for(int i = 0; i <size; i++)
		cout <<"[ " <<i<<" ]";
}

//operadores
ostream &operator<<( ostream &output, const Aviao &newAviao)
{
    output << newAviao.modelo <<"(id:" <<newAviao.idAviao <<")"<<
	"Motor: "<<newAviao.motor<<
	"Altura:"<<altAtual<<
	"Fab: "<<dtFab.dia<<"/"<<dtFab.mes<<"/"<<dtFab.ano<<
	"Tripulacao: " << trip1.pil <<", "<<trip1.coPil<<", "<<trip1.arChef;
    return output;
}


const Aviao & Aviao::operator=(const Aviao &a)
{
    this->modelo=a.modelo;
	this->idAviao=a.idAviao;
	this->motor=a.motor;
	this->altAtual=a.altAtual;
	Data dtFab(a.dtFab);
	Tripulacao trip1(a.trip1);    
}

bool Aviao::operator==(const Aviao &p) const{
    if(this->modelo!=p.modelo && this->idAviao!=p.idAviao && this->motor!=p.motor && this->dtFab.dia!=p.dtFab.dia &&this->dtFab.mes!=p.dtFab.mes && this->dtFab.ano!=p.dtFab.ano &&this->trip1.pil!=p.trip1.pil && trip1.coPil!=p.trip1.coPil &&trip1.arChef!=p.trip1.arChef)
	{
       return false; 
    }
    return true;
}

    
Aviao::~Aviao()
{
    delete &modelo;
    delete &motor;
    delete &idAviao;
    delete &altAtual;
    delete &ptrTripulacao;    
    delete &ptrData;
    
}
