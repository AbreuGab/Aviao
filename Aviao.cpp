#include <iostream>
using std::cout;
using std::endl;
#include "Aviao.h"


double Aviao::altMax=1000;


//contrutor
Aviao::Aviao(double altura,int capMax , int nPass,float enver0gadura, float comprimento, string modelo,string idAviao){
    this->altura=altura;
    this->capMax=capMax;
    this->nPass=nPass;
    this->envergadura=envergadura;
    this->comprimento=comprimento;
    this->modelo=modelo;
    this->idAviao=idAviao;
    }
//contrutor vazio    
Aviao::Aviao()
{
    altura=0;
    capMax=1;
    nPass=1;
    envergadura=0;
    comprimento=0;
    modelo="desconhecido";
    idAviao="XX000";
    }
    
//contrutor cópia
Aviao::Aviao(const Aviao &p){
    this->altura=p.altura;
    this->capMax=p.capMax;
    this->nPass=p.nPass;
    this->envergadura=p.envergadura;
    this->comprimento=p.comprimento;
    this->modelo=p.modelo;
    this->idAviao=p.idAviao;
}


void Aviao::setAltura(double alt){
    altura=alt;
}


double Aviao::getAltura() const{
    return altura;
}



void Aviao::exibirAtributos(const Aviao &p){
    cout<<"Modelo: "<<p.modelo<<
          "Envergadura: "<<p.envergadura<<
          "Comprimento:"<<p.comprimento <<
          "Capacidade Maxima: "<<p.capMax<<
          "Numero de Passageiros: "<<p.nPass<<
          "Id da Nave: "<<p.idAviao;
}

bool Aviao::testeAltura(){
    if(altura<=1000||altura>=0){
        return true;
    }
    else{
        return false;
    }
    }

Aviao::~Aviao()
{
    
    
}

