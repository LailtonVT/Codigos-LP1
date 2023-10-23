#include <iostream>
#include "Endereco.h"
#include <string>

Endereco::Endereco() {} // Construtor padrão vazio

Endereco::Endereco(std::string rua, int numero, std::string bairro, std::string cidade, std::string estado, std::string cep)
    : rua(rua), numero(numero), bairro(bairro), cidade(cidade), estado(estado), cep(cep) {}

std::string Endereco::toString() {
    return rua + ", " + std::to_string(numero) + ", " + bairro + ". " + cidade + " - " + estado + ". CEP: " + cep;
}