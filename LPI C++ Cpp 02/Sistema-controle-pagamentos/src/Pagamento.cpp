#include "Pagamento.h"
#include <string>

Pagamento::Pagamento() : valorPagamento(0), nomeDoFuncionario(""){}

Pagamento::Pagamento(float valorPagamento, std::string nomeDoFuncionario)
{
    this->valorPagamento = valorPagamento;
    this->nomeDoFuncionario = nomeDoFuncionario;
}

float Pagamento::getValorPagamento()
{
    return valorPagamento;
}
std::string Pagamento::getNomeDoFuncionario()
{
    return nomeDoFuncionario;
}

void Pagamento::setValorPagamento(float valorPagamento)
{
    this->valorPagamento = valorPagamento;
}
void Pagamento::setNomeDoFuncionario(std::string nomeDoFuncionario)
{
    this->nomeDoFuncionario = nomeDoFuncionario;
}
