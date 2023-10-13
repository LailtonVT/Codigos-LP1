#ifndef DATA_H
#define DATA_H

#include <string>

class Data {
private:
    int dia;
    int mes;
    int ano;

    int getDiasMes(int mes);

public:
    Data(int d, int m, int a);
    void setDia(int d);
    int getDia() const;
    void setMes(int m);
    int getMes() const;
    void setAno(int a);
    int getAno() const;
    void avancarDia();
    std::string exibirData() const;
};

#endif
