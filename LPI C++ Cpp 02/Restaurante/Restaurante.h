#ifndef RESTAURANTE_H
#define RESTAURANTE_H
#include "MesaDeRestaurante.h"

#include <vector>


class Restaurante
{
    public:
        Restaurante();

        void adicionarPedido(Pedido p, int indMesa);
        float calculaTotalRestaurante();
        void exibeContas();
        

    protected:

    private:
        std::vector<MesaDeRestaurante> mesas;
};

#endif // RESTAURANTE_H