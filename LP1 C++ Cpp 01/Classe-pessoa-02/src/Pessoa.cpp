#include <string>
#include "Pessoa.h"

Pessoa::Pessoa(std::string nome)
{
   this->nome = nome;
}

Pessoa::Pessoa(std::string nome, int idade, std::string telefone) :
    Pessoa(nome) //chamada do segundo construtor
{
    this->idade = idade;
    this->telefone = telefone;
}

std::string Pessoa::getNome()
{
    return nome;
}

int Pessoa::getIdade()
{
    return idade;
}

std::string Pessoa::getTelefone()
{
    return telefone;
}
void Pessoa::setNome(std::string nome)
{
    this->nome = nome;
}
void Pessoa::setIdade(int idade)
{
    this->idade = idade;
}
void Pessoa::setTelefone(std::string)
{
    this->telefone = telefone;
}
