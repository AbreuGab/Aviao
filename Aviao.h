#ifndef AVIAO_H
#define AVIAO_H
#include <ostream>
using std::ostream;
#include "Tripulacao.h"
#include <string>
using std::string;

    
class Aviao
{
    
    friend ostream &operator<<( ostream &, const Aviao &);
    
public:
    
    Aviao(double,int, int, float, float, string, string );
    Aviao(const Aviao &);
    Aviao();
    ~Aviao();
    
    //métodos da classe
    void setAltura(double);
    double getAltura() const; 
    void exibirAtributos(const Aviao &);
    bool testeAltura();
    
    //operadores
    const Aviao &operator=( const Aviao &);
    bool operator==(const Aviao &) const;
    bool operator!=( const Aviao &newAviao) const
    {
            return !(*this == newAviao);
    }    
    
    
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
