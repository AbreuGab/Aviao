#ifndef AVIAO_H
#define AVIAO_H
#include <ostream>
using std::ostream;
#include "Tripulacao.h"
#include <string>
using std::string;

    
class Aviao
{
    
    friend ostream &operator<<( ostream &, const Aviao &);
    
public:

	Aviao(string ,string, string,double=0, const Tripulacao &, const Data &)
    Aviao(const Aviao &);
	Aviao();
	~Aviao();
	
	double dAlt(double);
	bool testAlt(double);
	void intArr();
	double getAlt()const;
	void insPass(int, string);
	static void mostrarNomePass();
	
    //operadores
    const Aviao &operator=( const Aviao &);
    bool operator==(const Aviao &) const;
    bool operator!=( const Aviao &newAviao) const
    {
            return !(*this == newAviao);
    }    
    
private:
	
	string modelo;
	string idAviao;
	string pass[size];
	Tripulacao *ptrTripulacao;
	Data *ptrDtFab;
	string motor;
	double altAtual;
	static int size=5;
	
};

#endif // AVIAO_H
