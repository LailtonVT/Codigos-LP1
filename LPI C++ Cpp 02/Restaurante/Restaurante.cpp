#include "Restaurante.h"
#include <iostream>

Restaurante::Restaurante()
{
    for(int i = 0; i < 10; i++){
        mesas.push_back(MesaDeRestaurante());
    }
}

void Restaurante::adicionarPedido(Pedido p, int indMesa)
{
    if (indMesa >= 0 && indMesa < mesas.size()){
        mesas[indMesa].adicionarPedido(p);
    }
}

float Restaurante::calculaTotalRestaurante()
{
    float totalRestaurante = 0.0;
    for (MesaDeRestaurante& mesa : mesas){
        totalRestaurante += mesa.calculaTotal();
    }
    return totalRestaurante;
}

void Restaurante::exibeContas() {
    for(int i = 0; i < mesas.size(); i++) {
        if (mesas[i].temPedidos()) {
            std::cout << "Mesa " << i + 1 << std::endl;
            mesas[i].exibeConta();
            std::cout << std::endl;
        }
    }
}