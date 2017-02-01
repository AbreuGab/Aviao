#include <iostream>
using std::cout;
using std::endl;
#include "Aviao.h"


double Aviao::altMax=1000;


//contrutores
Aviao::Aviao(double altura,int capMax , int nPass,float enver0gadura, float comprimento, string modelo,string idAviao){
    this->altura=altura;
    this->capMax=capMax;
    this->nPass=nPass;
    this->envergadura=envergadura;
    this->comprimento=comprimento;
    this->modelo=modelo;
    this->idAviao=idAviao;
    }
 
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
    

Aviao::Aviao(const Aviao &p){
    this->altura=p.altura;
    this->capMax=p.capMax;
    this->nPass=p.nPass;
    this->envergadura=p.envergadura;
    this->comprimento=p.comprimento;
    this->modelo=p.modelo;
    this->idAviao=p.idAviao;
}



//métodos da Classe
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

   
    
//implementacao dos operadores    
ostream &operator<<( ostream &output, const Aviao &newAviao)
{
    output << newAviao.modelo <<"(" <<newAviao.idAviao <<")";
    return output;
}


const Aviao & Aviao::operator=(const Aviao &newAviao)
{
    this->altura=newAviao.altura;
    this->capMax=newAviao.capMax;
    this->nPass=newAviao.nPass;
    this->envergadura=newAviao.envergadura;
    this->comprimento=newAviao.comprimento;
    this->modelo=newAviao.modelo;
    this->idAviao=newAviao.idAviao;
    return *this;
    
}

bool Aviao::operator==(const Aviao &newAviao) const{
    if(this->capMax!=newAviao.capMax && this->nPass!=newAviao.nPass && this->envergadura!=newAviao.envergadura &&this->comprimento!=newAviao.comprimento && this->altura!=newAviao.altura && this->modelo!=newAviao.modelo &&this->idAviao!=newAviao.idAviao)
    {
       return false; 
    }
    return true;

}
/*Tripulacao *ptrTripulacao; 
    int capMax;
    int nPass;
    float envergadura;
    float comprimento;
    double altura;    
    string modelo;
    string idAviao; 
    static double altMax;*/
    
Aviao::~Aviao()
{
    delete &capMax;
    delete &nPass;
    delete &envergadura;
    delete &comprimento;
    delete &altura;    
    delete &modelo;
    delete &idAviao;     
    
}

