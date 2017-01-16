#ifndef AVIAO_H
#define AVIAO_H
#include<iostream>
#include<string>

class Aviao
{
public:
    
    Aviao(const double &);
    Aviao(const Aviao &);
    Aviao();
    ~Aviao();
    
    serAltura(const int &);
    
private:
    double altura;

};

#endif // AVIAO_H
