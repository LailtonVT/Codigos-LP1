#include <iostream>
#include <string>
#include "Data.h"

int Data::getDiasMes(int mes) {
    switch (mes) {
        case 2:
            return 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}

Data::Data(int d, int m, int a) {
    setAno(a);
    setMes(m);
    setDia(d);
}

void Data::setDia(int d) {
    if (d >= 1 && d <= getDiasMes(mes)) {
        dia = d;
    } else {
        std::cout << "Atributo dia Inválido" << std::endl;
        dia = 1;
    }
}

int Data::getDia() const {
    return dia;
}

void Data::setMes(int m) {
    if (m >= 1 && m <= 12) {
        mes = m;
    } else {
        std::cout << "Atributo mês Inválido" << std::endl;
        mes = 1;
    }
}

int Data::getMes() const {
    return mes;
}

void Data::setAno(int a) {
    if (a >= 1) {
        ano = a;
    } else {
        std::cout << "Atributo ano Inválido" << std::endl;
        ano = 1;
    }
}

int Data::getAno() const {
    return ano;
}

void Data::avancarDia() {
    if (dia < getDiasMes(mes)) {
        dia++;
    } else {
        dia = 1;
        if (mes < 12) {
            mes++;
        } else {
            mes = 1;
            ano++;
        }
    }
}

std::string Data::exibirData() const {
    // Formatar os atributos com "0" à esquerda se necessário
    std::string diaStr = (dia < 10) ? "0" + std::to_string(dia) : std::to_string(dia);
    std::string mesStr = (mes < 10) ? "0" + std::to_string(mes) : std::to_string(mes);
    std::string anoStr = std::to_string(ano);

    return diaStr + "/" + mesStr + "/" + anoStr;
}
