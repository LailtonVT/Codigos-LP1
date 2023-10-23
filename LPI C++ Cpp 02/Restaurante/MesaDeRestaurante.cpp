#include <iostream>
#include <iomanip>
#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante()
{
    //ctor
}

void MesaDeRestaurante::adicionarPedido(Pedido p)
{
    bool pedidoExistente = false;
    for (Pedido& pedido : pedidos){
        if(pedido.getNumero() == p.getNumero()){
            pedido.setQuantidade(pedido.getQuantidade() + p.getQuantidade());
            pedidoExistente = true;
            break;
        }
    }
    if(!pedidoExistente){
        pedidos.push_back(p);
    }
}
void MesaDeRestaurante::zerarPedidos()
{
    for(Pedido& pedido : pedidos){
        pedido.setQuantidade(0);
    }
}
float MesaDeRestaurante::calculaTotal()
{
    float totalMesa = 0.0;
    for(Pedido& pedido : pedidos){
        totalMesa += pedido.getTotal();
    }
    return totalMesa;
}
void MesaDeRestaurante::exibeConta()
{
    for (Pedido& pedido : pedidos){
         std::cout << pedido.getNumero() << " - " << pedido.getDescricao() << " - " << pedido.getQuantidade()
                  << " - " << pedido.getPreco() << " - R$ " << pedido.getTotal() << std::endl;
    }
    std::cout << "Total: R$ " << calculaTotal() << std::endl;
}
bool MesaDeRestaurante::temPedidos() const {
    return !pedidos.empty();
}