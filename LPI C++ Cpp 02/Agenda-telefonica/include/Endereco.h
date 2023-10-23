#ifndef ENDERECO_H
#define ENDERECO_H

#include <string>

class Endereco {
private:
    std::string rua;
    int numero;
    std::string bairro;
    std::string cidade;
    std::string estado;
    std::string cep;

public:
    Endereco(); // Construtor padrão
    Endereco(std::string rua, int numero, std::string bairro, std::string cidade, std::string estado, std::string cep);
    std::string toString();
};

#endif // ENDERECO_H