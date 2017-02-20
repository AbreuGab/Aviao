#ifndef CARGUEIRO_H
#define CARGUEIRO_H
#include "Aviao.h"
#include <ostream>
using std::ostream;


class Cargueiro: public Aviao
{
public:

	Cargueiro(float, float, string, string, string, double, int, int, int);
	Cargueiro(const Cargueiro &);
	~Cargueiro();
	
	void dCarga(float);
	bool testP();
	
	//operadores
    const Cargueiro &operator=( const Cargueiro &);
    bool operator==(const Cargueiro &) const;
    bool operator!=( const Cargueiro &a) const
    {
            return !(*this == a);
    } 
	
private:
	
	float carga;
	float cargaMax;

};

#endif // CARGUEIRO_H
