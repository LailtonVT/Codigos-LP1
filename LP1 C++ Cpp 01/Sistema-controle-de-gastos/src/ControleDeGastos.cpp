#include <iostream>
#include <string>
#include "ControleDeGastos.h"



ControleDeGastos::ControleDeGastos()
{
    despesas.resize(100); // inicializa o vetor com 100 elementos
}

void ControleDeGastos::setDespesa(const Despesa& d, int pos) {
    if (pos >= 0 && pos < 100) {
        despesas[pos] = d;
    }
}

Despesa ControleDeGastos::getDespesa(int pos) const {
    if (pos >= 0 && pos < 100) {
        return despesas[pos];
    } else {
        // Retornar uma despesa vazia ou lançar uma exceção, dependendo dos requisitos
        return Despesa();
    }
}

float ControleDeGastos::calculaTotalDeDespesas() const {
    float total = 0.0;
    for ( Despesa d : despesas) {
        total += d.getValor();
    }
    return total;
}

float ControleDeGastos::calculaTotalDeDespesas(const std::string& tipo) const {
    float total = 0.0;
    for ( Despesa d : despesas) {
        if (d.getTipoDeGasto() == tipo) {
            total += d.getValor();
        }
    }
    return total;
}

bool ControleDeGastos::existeDespesaDoTipo(const std::string& tipo) const {
    for ( Despesa d : despesas) {
        if (d.getTipoDeGasto() == tipo) {
            return true;
        }
    }
    return false;
}
