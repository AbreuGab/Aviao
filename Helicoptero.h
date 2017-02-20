#ifndef HELICOPTERO_H
#define HELICOPTERO_H
#include "string"
using std::cout;

class Helicoptero: public Aeronave
{
public:

	Helicoptero(string, string);
	Helicoptero(const Helicoptero &);
	Helicoptero();
	~Helicoptero();
	
	const Helicoptero &operator=( const Helicoptero &);
    bool operator==(const Helicoptero &) const;
    bool operator!=( const Helicoptero &a) const
    {
            return !(*this == a);
    } 
	
private:
	
	string modelo;
	string idHeli;

};

#endif // HELICOPTERO_H
