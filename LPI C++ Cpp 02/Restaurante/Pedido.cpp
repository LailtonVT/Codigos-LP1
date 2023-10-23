#include "Pedido.h"
#include <string>

Pedido::Pedido(int numero, const std::string descricao, int quantidade, float preco)
    : numero(numero), descricao(descricao), quantidade(quantidade), preco(preco) {}

int Pedido::getNumero()
{
    return numero;
}
std::string Pedido::getDescricao()
{
    return descricao;
}
int Pedido::getQuantidade()
{
    return quantidade;
}
float Pedido::getPreco()
{
    return preco;
}

float Pedido::getTotal()
{
    return quantidade * preco;
}

void Pedido::setQuantidade(int quantidade)
{
    this->quantidade = quantidade;
}