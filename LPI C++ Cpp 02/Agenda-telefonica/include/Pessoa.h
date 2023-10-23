#ifndef PESSOA_H
#define PESSOA_H

#include <string>

class Pessoa {
private:
    std::string nome;
    Endereco endereco;
    std::string telefone;

public:
    Pessoa(std::string nome);
    Pessoa(std::string nome, Endereco endereco, std::string telefone);

    std::string getNome();
    void setNome(std::string nome);
    Endereco getEndereco();
    void setEndereco(Endereco endereco);
    std::string getTelefone();
    void setTelefone(std::string telefone);

    std::string toString();
};

#endif // PESSOA_H
