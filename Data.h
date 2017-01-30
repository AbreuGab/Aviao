#ifndef DATE_H
#define DATE_H

class Data
{
public:

    Data(int =1, int = 1, int =1);
    Data(const Data &);
    void mostrarData() const;
    int verificarData(int) const;
    ~Data();
    
private: 

    int dia;
    int mes;
    int ano;
    
    
};

#endif // DATE_H
