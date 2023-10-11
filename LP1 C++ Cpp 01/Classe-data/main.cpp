#include <iostream>
#include "Data.h"

int main() {
    int dia, mes, ano, diasAvancar;

    std::cin >> dia >> mes >> ano;
    std::cin >> diasAvancar;

    Data data(dia, mes, ano);

    for (int i = 0; i < diasAvancar; i++) {
        data.avancarDia();
    }

    std::cout << data.exibirData() << std::endl;

    return 0;
}
