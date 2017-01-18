#include <iostream>
using std::cout;
#include "Aviao.h"


double Aviao::altMax=1000;

Aviao::Aviao(double altura){
    this->altura=altura;
    status="Ativo";
    }
    
Aviao::Aviao()
{
    altura=0;
    status="Ativo";
    }
    

Aviao::Aviao(const Aviao &p){
    this->altura=p.altura;
    this->status=p.status;
}

void Aviao::setAltura(double alt){
    altura=alt;
}

int Aviao::getAltura() const{
    return altura;
}

void Aviao::exibirStatus() const{
    cout<<status;
}

Aviao::~Aviao()
{
    
    
}

