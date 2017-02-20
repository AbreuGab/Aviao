#include "Aviao.h"
#include <iostream>

using std::cout;
using std::endl;


float firmeware=0.0;
const double Aviao::altMax=10000;

Aviao::Aviao(string mod, string id, string mt, double h, int d, int m, int a, string pil, string coPil, string arC)
:Aeronave::Aeronave(h,d,m,a), trip(pil,coPil,arC)
{	
		this->modelo=mod;
	this->idAviao=id;
	this->motor=mt;
	
}

Aviao::Aviao()
:Aeronave::Aeronave(), trip()
{
	this->modelo="indefinido";
	this->idAviao="indefinido";
	this->motor="indefinido";
	
}

Aviao::Aviao(const Aviao &a)
:trip(a.trip), Aeronave::Aeronave(a.Aeronave)
{
	this->modelo=a.modelo;
	this->idAviao=a.idAviao;
	this->motor=a.motor;
}



void Aviao::iccHist(int i, float vers) 
{
	firmHist[i]=vers;
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
