#include <iostream>
#include <string>
#include "Pagamento.h"
#include "ControlePagamento.h"

int main() {
    int numPagamentos;
    std::cin >> numPagamentos;

    ControleDePagamentos controle;

    for (int i = 0; i < numPagamentos; i++) {
        float valor;
        std::string nomeFuncionario;

        std::cin >> valor;
        std::cin.ignore(); // Consumir a quebra de linha ap�s a leitura do valor
        std::getline(std::cin, nomeFuncionario);

        Pagamento pagamento(valor, nomeFuncionario);
        controle.setPagamento(pagamento, i);
    }


    std::string nomePesquisado;
    std::cin >> nomePesquisado;

    int index = controle.getIndexFuncionario(nomePesquisado);

    if (index != -1) {
        Pagamento pagamentoEncontrado = controle.getPagamento(index);
        std::cout << pagamentoEncontrado.getNomeDoFuncionario() << ": R$ " << pagamentoEncontrado.getValorPagamento() << std::endl;
    } else {
        std::cout << nomePesquisado << " nao encontrado(a)." << std::endl;
    }

    std::cout << "Total: R$ " << controle.calculaTotalDePagamentos() << std::endl;

    return 0;
}
