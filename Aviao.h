#ifndef AVIAO_H
#define AVIAO_H
#include "Tripulacao.h"
#include <string>
using std::string;


class Aviao
{
public:
    
    Aviao(double,int, int, float, float, string, string );
    Aviao(const Aviao &);
    Aviao();
    void setAltura(double);
    double getAltura() const; 
    void exibirAtributos(const Aviao &);
    bool testeAltura();
     ~Aviao();
     
private:
    
    Tripulacao *ptrTripulacao; 
    int capMax;
    int nPass;
    float envergadura;
    float comprimento;
    double altura;    
    string modelo;
    string idAviao; 
    static double altMax;
};

#endif // AVIAO_H
