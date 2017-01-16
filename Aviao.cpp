#include "Aviao.h"



Aviao::Aviao(const double &altura){
    this->altura=altura;
    }
Aviao::Aviao()
{
    this->altura=0;
    }
Aviao::Aviao(Aviao){
    this->altura=&altura;
}

Aviao::~Aviao()
{
    
    
}

