#ifndef DESPESA_H
#define DESPESA_H

#include <string>

class Despesa {
private:
    std::string nome;
    double valor;
    std::string tipoDeGasto;

public:

    Despesa();
    Despesa(std::string nome, double valor, std::string tipoDeGasto);

    // M�todos para obter os atributos
    std::string getNome();
    double getValor();
    std::string getTipoDeGasto();

    // M�todos para alterar os atributos
    void setNome(std::string nome);
    void setValor(double valor);
    void setTipoDeGasto(std::string tipoDeGasto);
};

#endif // DESPESA_H
