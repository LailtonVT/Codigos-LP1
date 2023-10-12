#include <iostream>
#include <string>
#include "Despesa.h"


// Implementação do construtor
Despesa::Despesa()
{
    valor = 0.0;
}

Despesa::Despesa(std::string nome, double valor, std::string tipoDeGasto)
{
    this->nome = nome;
    this->valor = valor;
    this->tipoDeGasto = tipoDeGasto;
}


// Implementação dos métodos get
std::string Despesa::getNome()
{
    return nome;
}

double Despesa::getValor()
{
    return valor;
}

std::string Despesa::getTipoDeGasto()
{
    return tipoDeGasto;
}

void Despesa::setNome(std::string nome)
{
    this->nome = nome;
}

void Despesa::setValor(double valor)
{
    this->valor = valor;
}

void Despesa::setTipoDeGasto(std::string tipoDeGasto)
{
    this->tipoDeGasto = tipoDeGasto;
}
