#ifndef TRIPULACAO_H
#define TRIPULACAO_H
#include<string>
using std::string;

class Tripulacao
{
public:

    Tripulacao();
    Tripulacao(string, string, string);
    Tripulacao(const Tripulacao &);
    ~Tripulacao();

private:
    
    string piloto;
    string coPiloto;
    string aeromecaChefe;

};

#endif // TRIPULACAO_H
