#include<iostream>
using std::cout;
#include "Data.h"


Data::Data(int dia, int mes, int ano)
{
    this->dia=dia;
    this->mes=mes;
    this->ano=ano;
}

Data::Data(const Data &d)
{
    this->dia=d.dia;
    this->mes=d.mes;
    this->ano=d.ano;
}

int Data::verificarData(int dia) const
{
    static const int diasPorMes[13]={0,31,28,31,30,30,31,31,30,31,30,31};
    
    if(dia >0 && dia<= diasPorMes[mes])
        return dia;
    if(mes== 2 && dia == 29 &&(ano%400==0||(ano % 4 == 0 % 100 !=0)))
        return dia;
    cout << "Dia inválido . \n";
    
    return 1;
}

Data::~Data()
{
}

