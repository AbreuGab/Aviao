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
    int getAltura() const; 
    void exibirStatus()const;
     ~Aviao();
     
private:

    double altura;
    static double altMax;
    string status;
    
};

#endif // AVIAO_H
