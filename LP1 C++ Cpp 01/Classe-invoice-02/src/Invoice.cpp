#include <iostream>
#include "Invoice.h"
#include <string>

Invoice::Invoice(int numero, std::string descricao, int quantidade, float preco)
{
    this->numero = numero;
    this->descricao = descricao;
    this->quantidade = quantidade;
    this->preco = preco;

    if(quantidade < 0){
        this->quantidade = 0;
    }
    if (preco < 0){
        this->preco = 0;
    }
}

int Invoice::getNumero()
{
    return numero;
}
std::string Invoice::getDescricao()
{
    return descricao;
}
int Invoice::getQuantidade()
{
    return quantidade;
}
float Invoice::getPreco()
{
    return preco;
}

void Invoice::setNumero(int numero)
{
    this->numero = numero;
}
void Invoice::setDescricao(std::string descricao)
{
    this->descricao = descricao;
}
void Invoice::setQuantidade(int quantidade)
{
    this->quantidade = quantidade;
}
void Invoice::setPreco(float preco)
{
    this->preco = preco;
}

float Invoice::getInvoiceAmount()
{
    return quantidade * preco;
}

void Invoice::print()
{
    std::cout << numero << " - " << descricao << " - " << quantidade << " - " << preco << " - " << getInvoiceAmount() << std::endl;
}
