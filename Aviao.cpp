#include <iostream>
using std::cout;
using std::endl;
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

double Aviao::getAltura() const{
    return altura;
}

void Aviao::exibirStatus() const{
    cout<<'Status '<<status<<endl;
}

float Aviao::exibirAtributos(){
    cout<<'Modelo: '<<modelo<<endl;
    cout<<'Envergadura: '<<envergadura<<endl;
    cout<<'Comprimento:'<<comprimento<<endl ;
    cout<<'Capacidade Maxima: '<<capMAx<<endl;
    cout<<'Numero de Passageiros'<<nPass;
}

Aviao::~Aviao()
{
    
    
}

