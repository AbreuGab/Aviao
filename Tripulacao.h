#ifndef TRIPULACAO_H
#define TRIPULACAO_H
#include<string>
using std::string;

class Tripulacao
{
public:

    Tripulacao(string="indefinido", string="indefinido", string="indefinido");
    Tripulacao(const Tripulacao &);
    ~Tripulacao();

private:
    
    string pil;
    string coPil;
    string arChef;

};

#endif // TRIPULACAO_H
