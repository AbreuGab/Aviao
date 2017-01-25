#ifndef AVIAO_H
#define AVIAO_H
#include <string>
using std::string;

class Aviao
{
public:
    
    Aviao(double );
    Aviao(const Aviao &);
    Aviao();
    void setAltura(double);
    double getAltura() const; 
    float exibirStatus()const;
    float exibirAtributos();
     ~Aviao();
     
private:
    
    int capMax,  nPass;
    float envergadura, comprimento;
    double altura;
    static double altMax, modelo;
    string status;
    
};

#endif // AVIAO_H
