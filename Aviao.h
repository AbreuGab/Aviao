#ifndef AVIAO_H
#define AVIAO_H
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
    
    int capMax,  nPass;
    float envergadura, comprimento;
    double altura;    
    string modelo,idAviao; 
    static double altMax;
};

#endif // AVIAO_H
