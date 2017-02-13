#ifndef TRIPULACAO_H
#define TRIPULACAO_H
#include<string>
using std::string;
#include <ostream>
using std::ostream;

class Tripulacao
{
    
    friend ostream &operator<<( ostream &, const Tripulacao &);
    
public:

    Tripulacao(string="indefinido", string="indefinido", string="indefinido");
    Tripulacao(const Tripulacao &);
    ~Tripulacao();
    string getPil();
    string getCP();
    string getArC();
    
    const Tripulacao &operator=( const Tripulacao &);
    bool operator==(const Tripulacao &) const;
    bool operator!=( const Tripulacao &t) const
    {
            return !(*this == t);
    }    
    

private:
    
    string pil;
    string coPil;
    string arChef;

};

#endif // TRIPULACAO_H
