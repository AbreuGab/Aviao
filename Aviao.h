#ifndef AVIAO_H
#define AVIAO_H
#include <ostream>
using std::ostream;
#include "Tripulacao.h"
#include <string>
using std::string;
#include "Data.h"

    
class Aviao: public Aeronave
{
    
    friend ostream &operator<<( ostream &, const Aviao &);
    
public:

	Aviao(string ,string, string, double, int, int, int);
    Aviao(const Aviao &);
	Aviao();
	~Aviao();
	void iccHist(int, float);
	static void attFirm();
	
    //operadores
    const Aviao &operator=( const Aviao &);
    bool operator==(const Aviao &) const;
    bool operator!=( const Aviao &newAviao) const
    {
            return !(*this == newAviao);
    }; 
    
private:
	
	string modelo;
	string idAviao;
    string motor;
	float firmHist[10];
	Tripulacao trip;
    static float firmware;
	const static double altMax;
	
};

#endif // AVIAO_H
