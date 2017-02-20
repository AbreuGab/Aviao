#ifndef AERONAVE_H
#define AERONAVE_H
#include "Data.h"

class Aeronave
{
public:
	Aeronave(double, int, int, int);
	Aeronave(cosnt Aviao &);
	~Aeronave();
	double dAlt(double);
	bool testAlt();
	double getAlt()const;
	
	//operadores
    const Aeronave &operator=( const Aeronave &);
    bool operator==(const Aeronave &) const;
    bool operator!=( const Aeronave &a) const
    {
            return !(*this == a);
    } 
	
private:
	
	 double altAtual;
	 Data dtFab;	
};

#endif // AERONAVE_H
