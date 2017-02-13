#include "Aviao.h"
#include <iostream>

using std::cout;
using std::endl;


float firmeware=0.0;
const double Aviao::altMax=10000;

Aviao::Aviao(string mod, string id, string mt, double h, int d, int m, int a, string pil, string coPil, string arC)
:dtFab(d,m,a), trip(pil,coPil,arC)
{	
	this->modelo=mod;
	this->idAviao=id;
	this->motor=mt;
	this->altAtual=h;
	
}

Aviao::Aviao()
:dtFab(), trip()
{
	this->modelo="indefinido";
	this->idAviao="indefinido";
	this->motor="indefinido";
	this->altAtual=0;
	
}

Aviao::Aviao(const Aviao &a)
:trip(a.trip), dtFab(a.dtFab)
{
	this->modelo=a.modelo;
	this->idAviao=a.idAviao;
	this->motor=a.motor;
	this->altAtual=a.altAtual;
}

double Aviao::dAlt(double d)
{
	return altAtual=altAtual+d;
}

bool Aviao::testAlt()
{
	if(altAtual<=1000&&altAtual>=0){
		return true;
	}
	return false;	
}

void Aviao::intArr()
{
	for(int i=0;i<5;i++){
		pass[i]=0;
	}
}


double Aviao::getAlt() const
{
	return altAtual;	
}


void Aviao::insPass(int i, int nome) 
{
	pass[i]=nome;
}


void Aviao::attFirm()
{
    firmeware=firmeware+0.1;
}

//operadores
ostream &operator<<( ostream &output, const Aviao &a)
{
    output << a.modelo <<"(id:" <<a.idAviao <<")"<<
	"Motor: "<<a.motor<<
	"Altura:"<<a.altAtual<<
	"Fab: "<<a.dtFab<<
	"Tripulacao: " <<a.trip;
    return output;
}


const Aviao & Aviao::operator=(const Aviao &a)
{
    this->modelo=a.modelo;
	this->idAviao=a.idAviao;
	this->motor=a.motor;
	this->altAtual=a.altAtual;
	this->trip = a.trip;
    this->dtFab = a.dtFab;
}
//falta verificar o vetor
bool Aviao::operator==(const Aviao &p) const{
    if(this->modelo!=p.modelo || this->idAviao!=p.idAviao || this->motor!=p.motor || this->altAtual!=p.altAtual || this->dtFab!=p.dtFab || this->trip!=p.trip)
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
    delete &trip;    
    delete &dtFab;
    
}
