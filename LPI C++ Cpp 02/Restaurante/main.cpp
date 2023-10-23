#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "Restaurante.h"
#include "MesaDeRestaurante.h"
#include "Pedido.h"

int main() {
    Restaurante restaurante;

    int numeroPedido;
    std::string descricao;
    int quantidade;
    float preco;
    int mesa;

    while (true) {
        std::cout << "Digite o número do pedido (ou um número negativo para encerrar): ";
        std::cin >> numeroPedido;
        if (numeroPedido < 0) {
            break; // Encerra o loop quando um número negativo é fornecido
        }

        std::cin.ignore(); // Para consumir a nova linha deixada pelo cin

        std::cout << "Digite a descrição do pedido: ";
        std::getline(std::cin, descricao);
        
        std::cout << "Digite a quantidade: ";
        std::cin >> quantidade;
        
        std::cout << "Digite o preço: ";
        std::cin >> preco;
        
        std::cout << "Digite o número da mesa (1 a 10): ";
        std::cin >> mesa;

        Pedido pedido(numeroPedido, descricao, quantidade, preco);
        restaurante.adicionarPedido(pedido, mesa - 1); // Subtrai 1 para corresponder ao índice correto da mesa
    }

    std::cout << "\nContas das Mesas:\n";
    restaurante.exibeContas();
   
    std::cout << "\nTotal Restaurante: R$ " << std::fixed << std::setprecision(2) << restaurante.calculaTotalRestaurante() << std::endl;

    return 0;
}
