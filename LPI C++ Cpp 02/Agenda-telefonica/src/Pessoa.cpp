#include "Pessoa.h"
#include "Endereco.h"
#include <string>

Pessoa::Pessoa(std::string nome) : nome(nome) {}

Pessoa::Pessoa(std::string nome, Endereco endereco, std::string telefone)
    : nome(nome), endereco(endereco), telefone(telefone) {}

std::string Pessoa::getNome() {
    return nome;
}

void Pessoa::setNome(std::string nome) {
    this->nome = nome;
}

Endereco Pessoa::getEndereco() {
    return endereco;
}

void Pessoa::setEndereco(Endereco endereco) {
    this->endereco = endereco;
}

std::string Pessoa::getTelefone() {
    return telefone;
}

void Pessoa::setTelefone(std::string telefone) {
    this->telefone = telefone;
}

std::string Pessoa::toString() {
    return nome + ", " + telefone + "\n" + endereco.toString();
}