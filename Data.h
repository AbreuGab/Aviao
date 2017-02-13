#ifndef DATE_H
#define DATE_H
#include <ostream>
using std::ostream;

class Data
{
    
    friend ostream &operator<<( ostream &, const Data &);
    
public:

    Data(int =1, int = 1, int =1);
    Data(const Data &);
    int verificarData(int) const;
    int getD();
    int getM();
    int getA();

    const Data &operator=( const Data &);
    bool operator==(const Data &) const;
    bool operator!=( const Data &d) const
    {
            return !(*this == d);
    }    
    ~Data();
    
private: 

    int dia;
    int mes;
    int ano;
    
    
};

#endif // DATE_H
