#include <iostream>
#include <vector>
#include <iomanip>
#include "ControleDeGastos.h"


int main() {
    int numDespesas;
    std::cin >> numDespesas;

    ControleDeGastos controle;

    // Limpar o buffer de entrada após a leitura de numDespesas
    std::cin.ignore();

    for (int i = 0; i < numDespesas; ++i) {
        std::string nome, tipo;
        double valor;

        std::getline(std::cin, nome);
        std::cin >> valor;
        std::cin.ignore(); // Limpar o buffer de entrada após a leitura de valor

        std::getline(std::cin, tipo);

        Despesa despesa(nome, valor, tipo);
        controle.setDespesa(despesa, i);
    }

    std::string tipoParaExibir;
    std::getline(std::cin, tipoParaExibir);

    bool encontrouDespesa = false;
    //std::cout << std::fixed << std::setprecision(1);

    for (int i = 0; i < numDespesas; ++i) {
        Despesa despesa = controle.getDespesa(i);
        if (despesa.getTipoDeGasto() == tipoParaExibir) {
            std::cout << despesa.getNome() << ", R$ " << despesa.getValor() << std::endl;
            encontrouDespesa = true;
        }
    }

    if (!encontrouDespesa) {
        std::cout << "Nenhuma despesa do tipo especificado" << std::endl;
    }

    float totalDespesasTipo = controle.calculaTotalDeDespesas(tipoParaExibir);
    float totalDespesasGeral = controle.calculaTotalDeDespesas();

    std::cout << "Total: " << totalDespesasTipo << "/" << totalDespesasGeral << std::endl;

    return 0;
}
