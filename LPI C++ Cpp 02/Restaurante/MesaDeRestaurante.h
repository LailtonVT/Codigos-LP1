#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"

#include <vector>

class MesaDeRestaurante
{
    public:
        MesaDeRestaurante();

        void adicionarPedido(Pedido p);
        void zerarPedidos();
        float calculaTotal();
        void exibeConta();
        bool temPedidos() const;

    protected:

    private:
        std::vector<Pedido> pedidos;
};

#endif // MESADERESTAURANTE_H