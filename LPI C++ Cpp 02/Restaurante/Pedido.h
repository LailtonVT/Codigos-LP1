#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>

class Pedido {
public:
    Pedido(int numero, std::string descricao, int quantidade, float preco);

    float getTotal();

    int getNumero();
    std::string getDescricao();
    int getQuantidade();
    float getPreco();

    void setQuantidade(int quantidade);

private:
    int numero;
    std::string descricao;
    int quantidade;
    float preco;
};

#endif // PEDIDO_H